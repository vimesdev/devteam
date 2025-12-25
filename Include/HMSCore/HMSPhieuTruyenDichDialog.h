#ifndef HMSPHIEUTRUYENDICHDIALOG_H
#define HMSPHIEUTRUYENDICHDIALOG_H

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
class CHMSPhieuTruyenDichDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiCheckBox	m_wndCombined;
	CGuiGroupBox	m_wndInfusionDrugInformation;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiComboBox	m_wndDrugName;
	CGuiLabel		m_wndIsueeQtyLabel;
	CGuiNumberCtrl	m_wndIsueeQty;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiButton		m_wndAddDrug;
	CGuiLabel		m_wndVolumeLabel;
	CGuiNumberCtrl	m_wndVolume;
	CGuiLabel		m_wndUnitUseLabel;
	CGuiComboBox	m_wndUnitUse;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndVolumeTotalLabel;
	CGuiNumberCtrl	m_wndVolumeTotal;
	CGuiLabel		m_wndSpeedLabel;
	CGuiNumberCtrl	m_wndSpeed;
	CGuiComboBox	m_wndspeedunit;
	CGuiLabel		m_wndWireTypeLabel;
	CGuiNumberCtrl	m_wndWireType;
	CGuiLabel		m_wndgiot;
	CGuiLabel		m_wndDousageLabel;
	CGuiTextCtrl	m_wndDousage;
	CGuiLabel		m_wndStartTimeLabel;
	CGuiDateTimeCtrl	m_wndStartTime;
	CGuiButton		m_wndCalcu;
	CGuiLabel		m_wndEndTimeLabel;
	CGuiDateTimeCtrl	m_wndEndTime;
	CGuiTextCtrl	m_wndDesc;
	CGuiLabel		m_wndDevelopmentLabel;
	CGuiTextCtrl	m_wndDevelopment;
	CGuiLabel		m_wndNurseLabel;
	CGuiComboBox	m_wndNurse;
	CGuiLabel		m_wndFlollowersLabel;
	CGuiComboBox	m_wndFlollowers;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAdd;

	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;

	CGuiCheckBox	m_wndOldDate;

	CGuiLabel		m_wndLotnoLabel;
	CGuiTextCtrl	m_wndLotno;

	CGuiListCtrl	m_wndDousageList;
	CGuiButton		m_wndDoseAdjustment;

	CString	m_szOrderDate;
	BOOL	m_bCombined;
	CString	m_szDoctorKey;
	CString	m_szDrugNameKey;
	float	m_nIsueeQty;
	CString	m_szUnitKey;
	long	m_nVolume;
	CString	m_szUnitUseKey;
	long	m_nVolumeTotal;
	float	m_nSpeed;
	CString	m_szspeedunitKey;
	long	m_nWireType;
	CString	m_szDousage;
	CString	m_szStartTime;
	CString	m_szEndTime;
	CString	m_szDesc;
	CString	m_szDevelopment;
	CString	m_szNurseKey;
	CString	m_szFlollowersKey;
	CString m_szStatus;
	long	m_nDocumentNo;
	long	m_nProductID;
	long	m_nProductItemID;
	long	m_nOrderID;
	long	m_nOrderLineID;

	long	m_nRefProductID;
	long	m_nRefProductItemID;
	long	m_nRefOrderID;
	long	m_nRefOrderLineID;
	long	m_nIdx;
	int		m_nMode;
	
	CString m_szNurseID;
	CString m_szFollowID;
	CString m_szCreatedBy;
	CString m_szLotno;
	BOOL	m_bOldDate;
	CDbfMap m_hms_pharma_infusionTbl;
	CDbfMap m_hms_pharma_infusionLineTbl;
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnCombinedSelect(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	void			OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugNameSelendok(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	long			OnDrugNameLoadData(); 
	//void			OnDrugNameAddNew(); 
	//void			OnIsueeQtyChange(); 
	//void			OnIsueeQtySetfocus(); 
	//void			OnIsueeQtyKillfocus(); 
	int			OnIsueeQtyCheckValue(); 
	void			OnUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitSelendok(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	long			OnUnitLoadData(); 
	//void			OnUnitAddNew(); 
	void			OnAddDrugSelect(); 
	//void			OnVolumeChange(); 
	//void			OnVolumeSetfocus(); 
	//void			OnVolumeKillfocus(); 
	int			OnVolumeCheckValue(); 
	void			OnUnitUseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitUseSelendok(); 
	//void			OnUnitUseSetfocus(); 
	//void			OnUnitUseKillfocus(); 
	long			OnUnitUseLoadData(); 
	//void			OnUnitUseAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnVolumeTotalChange(); 
	//void			OnVolumeTotalSetfocus(); 
	//void			OnVolumeTotalKillfocus(); 
	int			OnVolumeTotalCheckValue(); 
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	void			OnspeedunitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnspeedunitSelendok(); 
	//void			OnspeedunitSetfocus(); 
	//void			OnspeedunitKillfocus(); 
	long			OnspeedunitLoadData(); 
	//void			OnspeedunitAddNew(); 
	//void			OnWireTypeChange(); 
	//void			OnWireTypeSetfocus(); 
	//void			OnWireTypeKillfocus(); 
	int			OnWireTypeCheckValue(); 
	//void			OnDousageChange(); 
	//void			OnDousageSetfocus(); 
	//void			OnDousageKillfocus(); 
	int			OnDousageCheckValue(); 
	//void			OnStartTimeChange(); 
	//void			OnStartTimeSetfocus(); 
	//void			OnStartTimeKillfocus(); 
	int			OnStartTimeCheckValue(); 
	void			OnCalcuSelect(); 
	//void			OnEndTimeChange(); 
	//void			OnEndTimeSetfocus(); 
	//void			OnEndTimeKillfocus(); 
	int			OnEndTimeCheckValue(); 
	//void			OnDescChange(); 
	//void			OnDescSetfocus(); 
	//void			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	//void			OnDevelopmentChange(); 
	//void			OnDevelopmentSetfocus(); 
	//void			OnDevelopmentKillfocus(); 
	int			OnDevelopmentCheckValue(); 
	void			OnNurseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurseSelendok(); 
	//void			OnNurseSetfocus(); 
	//void			OnNurseKillfocus(); 
	long			OnNurseLoadData(); 
	//void			OnNurseAddNew(); 
	void			OnFlollowersSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFlollowersSelendok(); 
	//void			OnFlollowersSetfocus(); 
	//void			OnFlollowersKillfocus(); 
	long			OnFlollowersLoadData(); 
	//void			OnFlollowersAddNew(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect();
	void			OnAddSelect();

	void			OnEditSelect();
	void			OnDeleteSelect();

	long			OnDousageListLoadData(); 
	void			OnDousageListSelectChange(int nOldItem, int nNewItem); 
	void			OnDousageListDblClick(); 
	int			OnDousageListDeleteItem(); 
	void			OnDoseAdjustmentSelect(); 
	void			OnOldDateSelect(); 
	CHMSPhieuTruyenDichDialog(CWnd *pParent,int nMode);
	~CHMSPhieuTruyenDichDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhieuTruyenDichDialog(); 
	int OnEditHMSPhieuTruyenDichDialog(); 
	int OnDeleteHMSPhieuTruyenDichDialog(); 
	int OnSaveHMSPhieuTruyenDichDialog(); 
	int OnCancelHMSPhieuTruyenDichDialog(); 
	int OnHMSPhieuTruyenDichDialogListLoadData(); 
};
#endif
