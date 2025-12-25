#ifndef HMSINSTRUMENTDATASETTING_H
#define HMSINSTRUMENTDATASETTING_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSInstrumentDataSetting : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInstrumentDataInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndCodeInLabel;
	CGuiTextCtrl	m_wndCodeIn;
	CGuiLabel		m_wndTestIDLabel;
	CGuiComboBox	m_wndTestID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndPrintIndexLabel;
	CGuiNumberCtrl	m_wndPrintIndex;
	CGuiLabel		m_wndMaleNormIndexLabel;
	CGuiTextCtrl	m_wndMaleNormIndex;
	CGuiLabel		m_wndFemaleNormalIndexLabel;
	CGuiTextCtrl	m_wndFemaleNormalIndex;
	CGuiLabel		m_wndMinIndexLabel;
	CGuiTextCtrl	m_wndMinIndex;
	CGuiLabel		m_wndMaxIndexLabel;
	CGuiTextCtrl	m_wndMaxIndex;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szCode;
	CString	m_szCodeIn;
	CString	m_szTestIDKey;
	CString	m_szName;
	CString	m_szUnit;
	long	m_nPrintIndex;
	CString	m_szMaleNormIndex;
	CString	m_szFemaleNormalIndex;
	CString	m_szMinIndex;
	CString	m_szMaxIndex;
	CDbfMap	m_hms_instrument_itemTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnCodeInChange(); 
	//void			OnCodeInSetfocus(); 
	//void			OnCodeInKillfocus(); 
	int			OnCodeInCheckValue(); 
	void			OnTestIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestIDSelendok(); 
	//void			OnTestIDSetfocus(); 
	//void			OnTestIDKillfocus(); 
	long			OnTestIDLoadData(); 
	void			OnTestIDAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnPrintIndexChange(); 
	//void			OnPrintIndexSetfocus(); 
	//void			OnPrintIndexKillfocus(); 
	int			OnPrintIndexCheckValue(); 
	//void			OnMaleNormIndexChange(); 
	//void			OnMaleNormIndexSetfocus(); 
	//void			OnMaleNormIndexKillfocus(); 
	int			OnMaleNormIndexCheckValue(); 
	//void			OnFemaleNormalIndexChange(); 
	//void			OnFemaleNormalIndexSetfocus(); 
	//void			OnFemaleNormalIndexKillfocus(); 
	int			OnFemaleNormalIndexCheckValue(); 
	//void			OnMinIndexChange(); 
	//void			OnMinIndexSetfocus(); 
	//void			OnMinIndexKillfocus(); 
	int			OnMinIndexCheckValue(); 
	//void			OnMaxIndexChange(); 
	//void			OnMaxIndexSetfocus(); 
	//void			OnMaxIndexKillfocus(); 
	int			OnMaxIndexCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSInstrumentDataSetting();
	~CHMSInstrumentDataSetting();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInstrumentDataSetting(); 
	int OnEditHMSInstrumentDataSetting(); 
	int OnDeleteHMSInstrumentDataSetting(); 
	int OnSaveHMSInstrumentDataSetting(); 
	int OnCancelHMSInstrumentDataSetting(); 
	int OnHMSInstrumentDataSettingListLoadData(); 
};
#endif
