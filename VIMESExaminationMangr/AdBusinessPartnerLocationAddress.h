#ifndef ADBUSINESSPARTNERLOCATIONADDRESS_H
#define ADBUSINESSPARTNERLOCATIONADDRESS_H

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
class CAdBusinessPartnerLocationAddress : public CGuiView{
protected:
public:
	CGuiLabel		m_wndProvinceLabel;
	CGuiComboBox	m_wndProvince;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CString	m_szPartnerID;
	CString	m_szProvinceKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CDbfMap	m_ad_partnerTbl;
	void			OnProvinceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvinceSelendok(); 
	//void			OnProvinceSetfocus(); 
	//void			OnProvinceKillfocus(); 
	long			OnProvinceLoadData(); 
	//void			OnProvinceAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	CAdBusinessPartnerLocationAddress();
	~CAdBusinessPartnerLocationAddress();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerLocationAddress(); 
	int OnEditAdBusinessPartnerLocationAddress(); 
	int OnDeleteAdBusinessPartnerLocationAddress(); 
	int OnSaveAdBusinessPartnerLocationAddress(); 
	int OnCancelAdBusinessPartnerLocationAddress(); 
	int OnAdBusinessPartnerLocationAddressListLoadData(); 
};
#endif
