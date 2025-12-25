#ifndef SYSINSURANCECODE_H
#define SYSINSURANCECODE_H

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
#include "GuiView.h"
#include "DbField.h"
class CSysInsuranceCode : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndInsuranceConditionalGroupBox;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTypeLabel;
	CGuiTextCtrl	m_wndType;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndCardFormatLabel;
	CGuiTextCtrl	m_wndCardFormat;
	CGuiLabel		m_wndConditionalLabel;
	CGuiTextCtrl	m_wndConditional;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndTypeDesc;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szType;
	CString	m_szGroupKey;
	CString	m_szCardFormat;
	CString	m_szConditional;
	CString	m_szCode;
	long	m_nDiscount;
	CDbfMap	m_hms_object_lineTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListUpdateGroup(); 
	//void			OnTypeChange(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	int			OnTypeCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	//void			OnCardFormatChange(); 
	//void			OnCardFormatSetfocus(); 
	//void			OnCardFormatKillfocus(); 
	int			OnCardFormatCheckValue(); 
	//void			OnConditionalChange(); 
	//void			OnConditionalSetfocus(); 
	//void			OnConditionalKillfocus(); 
	int			OnConditionalCheckValue(); 
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CSysInsuranceCode();
	~CSysInsuranceCode();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInsuranceCodeDialog(); 
	int OnEditHMSInsuranceCodeDialog(); 
	int OnDeleteHMSInsuranceCodeDialog(); 
	int OnSaveHMSInsuranceCodeDialog(); 
	int OnCancelHMSInsuranceCodeDialog(); 
	int OnHMSInsuranceCodeDialogListLoadData(); 
	void Refresh();
};
#endif
