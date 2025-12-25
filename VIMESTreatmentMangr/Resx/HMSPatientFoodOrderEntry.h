#ifndef HMSPATIENTFOODORDERENTRY_H
#define HMSPATIENTFOODORDERENTRY_H

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
class CHMSPatientFoodOrderEntry : public CGuiView{
protected:
public:
	CGuiCheckBox	m_wndMultipleDay;
	CGuiNumberCtrl	m_wndDays;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiComboBox	m_wndPatientName;
	CGuiTextCtrl	m_wndDocumentNo;
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
	CGuiLabel		m_wndBreakfastRelativeLabel;
	CGuiComboBox	m_wndBreakfastRelative;
	CGuiLabel		m_wndQty3Label;
	CGuiNumberCtrl	m_wndQty3;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	BOOL	m_bMultipleDay;
	long	m_nDays;
	CString	m_szOrderDate;
	CString	m_szPatientNameKey;
	CString	m_szDocumentNo;
	CString	m_szNameKey;
	long	m_nQty;
	CString	m_szName1Key;
	long	m_nQty1;
	CString	m_szName2Key;
	long	m_nQty2;
	CString	m_szBreakfastRelativeKey;
	long	m_nQty3;
	CString	m_szNote;
	void			OnMultipleDaySelect(); 
	//void			OnDaysChange(); 
	//void			OnDaysSetfocus(); 
	//void			OnDaysKillfocus(); 
	int			OnDaysCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientNameSelendok(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	long			OnPatientNameLoadData(); 
	//void			OnPatientNameAddNew(); 
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
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnName1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName1Selendok(); 
	//void			OnName1Setfocus(); 
	//void			OnName1Killfocus(); 
	long			OnName1LoadData(); 
	//void			OnName1AddNew(); 
	//void			OnQty1Change(); 
	//void			OnQty1Setfocus(); 
	//void			OnQty1Killfocus(); 
	int			OnQty1CheckValue(); 
	void			OnName2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName2Selendok(); 
	//void			OnName2Setfocus(); 
	//void			OnName2Killfocus(); 
	long			OnName2LoadData(); 
	//void			OnName2AddNew(); 
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
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSPatientFoodOrderEntry();
	~CHMSPatientFoodOrderEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
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
};
#endif
