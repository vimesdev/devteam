#ifndef HMSTREATMENTPRESCRIPTIONPOPUPEX_H
#define HMSTREATMENTPRESCRIPTIONPOPUPEX_H

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
class CHMSTreatmentPrescriptionPopupEx : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPrescriptionInput;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiTextCtrl	m_wndUsage;
	CGuiLabel		m_wndSpeedLabel;
	CGuiTextCtrl	m_wndSpeed;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szName;
	CString	m_szUnitKey;
	long	m_nQty;
	CString	m_szIndicationKey;
	CString	m_szUsage;
	CString	m_szSpeed;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitSelendok(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	long			OnUnitLoadData(); 
	//void			OnUnitAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	//void			OnIndicationAddNew(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSTreatmentPrescriptionPopupEx(CWnd *pParent);
	~CHMSTreatmentPrescriptionPopupEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentPrescriptionPopupEx(); 
	int OnEditHMSTreatmentPrescriptionPopupEx(); 
	int OnDeleteHMSTreatmentPrescriptionPopupEx(); 
	int OnSaveHMSTreatmentPrescriptionPopupEx(); 
	int OnCancelHMSTreatmentPrescriptionPopupEx(); 
	int OnHMSTreatmentPrescriptionPopupExListLoadData(); 
};
#endif
