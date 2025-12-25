#ifndef FAMQDEPRCACULATION_H
#define FAMQDEPRCACULATION_H

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
class CFAMQDeprCaculation : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndLastCalcDateLabel;
	CGuiDateCtrl	m_wndLastCalcDate;
	CGuiLabel		m_wndCalcDateLabel;
	CGuiDateCtrl	m_wndCalcDate;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndDeprePerProductLabel;
	CGuiNumberCtrl	m_wndDeprePerProduct;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szExpiryDate;
	CString	m_szLastCalcDate;
	CString	m_szCalcDate;
	long	m_nQuantity;
	double	m_nDeprePerProduct;
	CString m_szAssetNo;
	int m_nID;
	double m_nRemainValue;
	//void			OnExpiryDateChange(); 
	//void			OnExpiryDateSetfocus(); 
	//void			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	//void			OnLastCalcDateChange(); 
	//void			OnLastCalcDateSetfocus(); 
	//void			OnLastCalcDateKillfocus(); 
	int			OnLastCalcDateCheckValue(); 
	//void			OnCalcDateChange(); 
	//void			OnCalcDateSetfocus(); 
	//void			OnCalcDateKillfocus(); 
	int			OnCalcDateCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnDeprePerProductChange(); 
	//void			OnDeprePerProductSetfocus(); 
	//void			OnDeprePerProductKillfocus(); 
	int			OnDeprePerProductCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnFormLoad();
	CString			GetLastDateOfMonth();
	CString			GetNextSchedule();
	CFAMQDeprCaculation(CWnd *pParent);
	~CFAMQDeprCaculation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMQDeprCaculation(); 
	int OnEditFAMQDeprCaculation(); 
	int OnDeleteFAMQDeprCaculation(); 
	int OnSaveFAMQDeprCaculation(); 
	int OnCancelFAMQDeprCaculation(); 
	int OnFAMQDeprCaculationListLoadData();
};
#endif
