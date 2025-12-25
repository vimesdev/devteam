#ifndef HMSSurgeryExtraInfoDialog_H
#define HMSSurgeryExtraInfoDialog_H

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

#include "DbField.h"
#include "GuiPopup.h"
class CHMSSurgeryExtraInfoDialog : public CGuiPopup{
protected:
public:
	long		m_nRefOptIdx;
	long		m_nOrderID;
	CWnd*		m_pParentRef;
	CDbfMap		m_hms_operationTbl;
	CGuiGroupBox	m_wndSurgeryInformation;
	CGuiLabel		m_wndSurgeryNameLabel;
	CGuiComboBox	m_wndSurgeryName;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szSurgeryNameKey;
	CString	m_szReference;
	float	m_nQuantity;
	long	m_nUnitPrice;
	void			OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryNameSelendok(); 
	//void			OnSurgeryNameSetfocus(); 
	//void			OnSurgeryNameKillfocus(); 
	long			OnSurgeryNameLoadData(); 
	//void			OnSurgeryNameAddNew(); 
	//void			OnReferenceChange(); 
	void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSSurgeryExtraInfoDialog(CWnd *pParent, long nRefOptIdx);
	~CHMSSurgeryExtraInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryExtraInfoDialog(); 
	int OnEditHMSSurgeryExtraInfoDialog(); 
	int OnDeleteHMSSurgeryExtraInfoDialog(); 
	int OnSaveHMSSurgeryExtraInfoDialog(); 
	int OnCancelHMSSurgeryExtraInfoDialog(); 
	int OnHMSSurgeryExtraInfoDialogListLoadData(); 
};
#endif
