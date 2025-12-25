#ifndef HMSPCDESCRIBESETUP_H
#define HMSPCDESCRIBESETUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CHMSPCDescribeSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndDescribeItems;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDescIDLabel;
	CGuiComboBox	m_wndDescID;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndTypeLabel;
	CGuiNumberCtrl	m_wndType;
	CGuiLabel		m_wndWidthLabel;
	CGuiNumberCtrl	m_wndWidth;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiLabel		m_wndColumnLabel;
	CGuiNumberCtrl	m_wndColumn;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndCaptionLabel;
	CGuiTextCtrl	m_wndCaption;
	CGuiLabel		m_wndDefaultValueLabel;
	CGuiTextCtrl	m_wndDefaultValue;
	CGuiLabel		m_wndDataLabel;
	CGuiTextCtrl	m_wndData;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szDescIDKey;
	long	m_nIndex;
	long	m_nType;
	long	m_nWidth;
	long	m_nHeight;
	long	m_nColumn;
	CString	m_szName;
	CString	m_szCaption;
	CString	m_szDefaultValue;
	CString	m_szData;
	CDbfMap	m_hms_pcdescsetupTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnDescIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescIDSelendok(); 
	//void			OnDescIDSetfocus(); 
	//void			OnDescIDKillfocus(); 
	long			OnDescIDLoadData(); 
	void			OnDescIDAddNew(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnTypeChange(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	int			OnTypeCheckValue(); 
	//void			OnWidthChange(); 
	//void			OnWidthSetfocus(); 
	//void			OnWidthKillfocus(); 
	int			OnWidthCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	//void			OnColumnChange(); 
	//void			OnColumnSetfocus(); 
	//void			OnColumnKillfocus(); 
	int			OnColumnCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnCaptionChange(); 
	//void			OnCaptionSetfocus(); 
	//void			OnCaptionKillfocus(); 
	int			OnCaptionCheckValue(); 
	//void			OnDefaultValueChange(); 
	//void			OnDefaultValueSetfocus(); 
	//void			OnDefaultValueKillfocus(); 
	int			OnDefaultValueCheckValue(); 
	//void			OnDataChange(); 
	//void			OnDataSetfocus(); 
	//void			OnDataKillfocus(); 
	int			OnDataCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSPCDescribeSetup();
	~CHMSPCDescribeSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPCDescribeSetup(); 
	int OnEditHMSPCDescribeSetup(); 
	int OnDeleteHMSPCDescribeSetup(); 
	int OnSaveHMSPCDescribeSetup(); 
	int OnCancelHMSPCDescribeSetup(); 
	int OnHMSPCDescribeSetupListLoadData(); 
};
#endif
