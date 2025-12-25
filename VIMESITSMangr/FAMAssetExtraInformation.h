#ifndef FAMASSETEXTRAINFORMATION_H
#define FAMASSETEXTRAINFORMATION_H

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
class CFAMAssetExtraInformation : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndCapacityLabel;
	CGuiTextCtrl	m_wndCapacity;
	CGuiLabel		m_wndTransportPriceLabel;
	CGuiNumberCtrl	m_wndTransportPrice;
	CGuiLabel		m_wndTestRunPriceLabel;
	CGuiNumberCtrl	m_wndTestRunPrice;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szCapacity;
	long	m_nTransportPrice;
	long	m_nTestRunPrice;
	CDbfMap	m_fam_assetTbl;
	//void			OnCapacityChange(); 
	//void			OnCapacitySetfocus(); 
	//void			OnCapacityKillfocus(); 
	int			OnCapacityCheckValue(); 
	//void			OnTransportPriceChange(); 
	//void			OnTransportPriceSetfocus(); 
	//void			OnTransportPriceKillfocus(); 
	int			OnTransportPriceCheckValue(); 
	//void			OnTestRunPriceChange(); 
	//void			OnTestRunPriceSetfocus(); 
	//void			OnTestRunPriceKillfocus(); 
	int			OnTestRunPriceCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CFAMAssetExtraInformation(CWnd *pParent);
	~CFAMAssetExtraInformation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAssetExtraInformation(); 
	int OnEditFAMAssetExtraInformation(); 
	int OnDeleteFAMAssetExtraInformation(); 
	int OnSaveFAMAssetExtraInformation(); 
	int OnCancelFAMAssetExtraInformation(); 
	int OnFAMAssetExtraInformationListLoadData(); 
};
#endif
