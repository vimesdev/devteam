#ifndef VIMESADDRESS_H
#define VIMESADDRESS_H

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
class CVIMESAddress : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndGroupProvince;
	CGuiGroupBox	m_wndGroupDistrict;
	CGuiGroupBox	m_wndVillage;
	CGuiListCtrl	m_wndListDist;
	CGuiListCtrl	m_wndListProv;
	CGuiListCtrl	m_wndListVilage;
    CGuiCheckBox m_wndCheckAddressLevel2;
	CDbfMap	m_sys_provTbl;
	CDbfMap	m_sys_distTbl;
	CDbfMap	m_sys_villTbl;
	int m_nVillageID, m_nProvID, m_nDistID;	
	BOOL m_bAddressLevel2;
	long			OnListDistLoadData(); 
	void			OnListDistSelectChange(int nOldItem, int nNewItem); 
	void			OnListDistDblClick(); 
	int			OnListDistAddItem(); 
	int			OnListDistEditItem(); 
	int			OnListDistDeleteItem(); 
	long			OnListProvLoadData(); 
	void			OnListProvSelectChange(int nOldItem, int nNewItem); 
	void			OnListProvDblClick(); 
	int			OnListProvAddItem(); 
	int			OnListProvEditItem(); 
	int			OnListProvDeleteItem(); 
	long			OnListVilageLoadData(); 
	void			OnListVilageSelectChange(int nOldItem, int nNewItem); 
	void			OnListVilageDblClick(); 
	int			OnListVilageAddItem(); 
	int			OnListVilageEditItem(); 
	int			OnListVilageDeleteItem(); 
	void CheckAddressLevel2();
	CVIMESAddress();
	~CVIMESAddress();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESAdressDialog(); 
	int OnEditVIMESAdressDialog(); 
	int OnDeleteVIMESAdressDialog(); 
	int OnSaveVIMESAdressDialog(); 
	int OnCancelVIMESAdressDialog(); 
	int OnVIMESAdressDialogListLoadData(); 
	
	void Refresh();
};
#endif
