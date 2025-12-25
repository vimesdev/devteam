#ifndef HMS_OBAKHOARANGTAB_H
#define HMS_OBAKHOARANGTAB_H

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
#include "HMSBenhAnView.h"

#include "HMS_OBAKhoaRang.h"
#include "HMS_OBAKhoaRang2.h"
#include "HMSDanhGiaTheoDoiSauInplant.h"
#include "HMSDanhGiaTheoDoiSauInplant2.h"
#include "HMSDanhGiaTheoDoiSauInplant3.h"
#include "HMSDanhGiaTheoDoiSauInplant4.h"
#include "HMSDanhGiaTheoDoiSauInplant51.h"
#include "HMSDanhGiaTheoDoiSauInplant52.h"
#include "HMSDanhGiaTheoDoiSauInplant53.h"
#include "HMSDanhGiaTheoDoiSauInplant54.h"
class CHMS_OBAKhoaRangTab : public CHMSBenhAnView{
protected:
public:
	CHMS_OBAKhoaRang m_wndKR;
	CHMS_OBAKhoaRang2 m_wndKR2;
	CHMSDanhGiaTheoDoiSauInplant m_wndInplant;
	CHMSDanhGiaTheoDoiSauInplant2 m_wndInplant2;
	CHMSDanhGiaTheoDoiSauInplant3 m_wndInplant3;
	CHMSDanhGiaTheoDoiSauInplant4 m_wndInplant4;
	CHMSDanhGiaTheoDoiSauInplant51 m_wndInplant51;
	CHMSDanhGiaTheoDoiSauInplant52 m_wndInplant52;
	CHMSDanhGiaTheoDoiSauInplant53 m_wndInplant53;
	CHMSDanhGiaTheoDoiSauInplant54 m_wndInplant54;

	CGuiTabCtrl	m_wndToothTab;
	void			OnToothTabSelectChange(int nOld, int nNew); 
	CHMS_OBAKhoaRangTab(CWnd *pParent);
	~CHMS_OBAKhoaRangTab();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBAKhoaRangTab(); 
	int OnEditHMS_OBAKhoaRangTab(); 
	int OnDeleteHMS_OBAKhoaRangTab(); 
	int OnSaveHMS_OBAKhoaRangTab(); 
	int OnCancelHMS_OBAKhoaRangTab(); 
	int OnHMS_OBAKhoaRangTabListLoadData(); 

	bool OnUpdateSelect();
	void OnSaveSelect();
	void OnPrintSelect();
	void OnCancelSelect();

};
#endif
