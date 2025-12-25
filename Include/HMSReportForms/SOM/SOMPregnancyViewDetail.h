#ifndef SOMPREGNANCYVIEWDETAIL_H
#define SOMPREGNANCYVIEWDETAIL_H

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
class CSOMPregnancyViewDetail : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndParaclinicalInformation;
	CGuiLabel		m_wndGroupLabel;
	CGuiTextCtrl	m_wndGroup;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndParaclinicalNameDetailLabel;
	CGuiTextCtrl	m_wndParaclinicalNameDetail;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndScaleLabel;
	CGuiNumberCtrl	m_wndScale;
	CGuiLabel		m_wndFemaleIndexLabel;
	CGuiTextCtrl	m_wndMaleIndex;
	CGuiTextCtrl	m_wndFemaleIndex;
	CGuiLabel		m_wndMaleIndexLabel;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndPrintBold;
	CString m_szID;
	CString	m_szGroupKey;
	CString	m_szApplyDate;
	CString	m_szParaclinicalNameDetail;
	CString	m_szUnit;
	long	m_nScale;
	CString	m_szMaleIndex;
	CString	m_szFemaleIndex;
	BOOL	m_bPrintBold;
	CDbfMap	m_hms_fee_listTbl;
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	//void			OnParaclinicalNameChange(); 
	//void			OnParaclinicalNameSetfocus(); 
	//void			OnParaclinicalNameKillfocus(); 
	int			OnParaclinicalNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnScaleChange(); 
	//void			OnScaleSetfocus(); 
	//void			OnScaleKillfocus(); 
	int			OnScaleCheckValue(); 
	//void			OnMaleIndexChange(); 
	//void			OnMaleIndexSetfocus(); 
	//void			OnMaleIndexKillfocus(); 
	int			OnMaleIndexCheckValue(); 
	//void			OnFemaleIndexChange(); 
	//void			OnFemaleIndexSetfocus(); 
	//void			OnFemaleIndexKillfocus(); 
	int			OnFemaleIndexCheckValue(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnPrintBoldSelect();
	CSOMPregnancyViewDetail(CWnd *pParent);
	~CSOMPregnancyViewDetail();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddParaclinicalInfor(); 
	int OnEditParaclinicalInfor(); 
	int OnDeleteParaclinicalInfor(); 
	int OnSaveParaclinicalInfor(); 
	int OnCancelParaclinicalInfor(); 
	int OnParaclinicalInforListLoadData(); 
};
#endif