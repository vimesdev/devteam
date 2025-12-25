#ifndef HMSPRESCRIPTIONGROUPITEMSDIALOG_H
#define HMSPRESCRIPTIONGROUPITEMSDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSPrescriptionGroupItemsDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPrescriptionGroup;
	CGuiListCtrl	m_wndGroupList;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiComboBox	m_wndDrugName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szDrugNameKey;
	long	m_nQuantity;
	CString	m_szUsage;
	CDbfMap	m_hms_pharma_group_lineTbl;
	long			OnGroupListLoadData(); 
	void			OnGroupListSelectChange(int nOldItem, int nNewItem); 
	void			OnGroupListDblClick(); 
	int			OnGroupListDeleteItem(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugNameSelendok(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	long			OnDrugNameLoadData(); 
	void			OnDrugNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSPrescriptionGroupItemsDialog();
	~CHMSPrescriptionGroupItemsDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionGroupItemsDialog(); 
	int OnEditHMSPrescriptionGroupItemsDialog(); 
	int OnDeleteHMSPrescriptionGroupItemsDialog(); 
	int OnSaveHMSPrescriptionGroupItemsDialog(); 
	int OnCancelHMSPrescriptionGroupItemsDialog(); 
	int OnHMSPrescriptionGroupItemsDialogListLoadData(); 
};
#endif
