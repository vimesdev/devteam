#ifndef PMSYSPURCHASETODUOCQG_H
#define PMSYSPURCHASETODUOCQG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CPMSysPurchaseToDuocQG : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndDateLabel;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiTextCtrl	m_wndDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndPartnerLabel;
	CGuiTextCtrl	m_wndPartner;
	CGuiLabel		m_wndMaQGLabel;
	CGuiTextCtrl	m_wndmaQG;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPostToAPI;
	CGuiButton		m_wndUnPost;
	CGuiListCtrl	m_wndListPost;
	CGuiListCtrl	m_wndDrugList;
	long	m_nOrderID;
	long m_nID;
	int m_nType;
	int m_nStockID;
	CString	m_szOrderNo;
	CString	m_szDate;
	CString	m_szNote;
	CString	m_szPartner;
	CString	m_szmaQG;
	CString	m_szStatus;
	CDbfMap	m_hms_lienthong_orderTbl;
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnPartnerChange(); 
	//void			OnPartnerSetfocus(); 
	//void			OnPartnerKillfocus(); 
	int			OnPartnerCheckValue(); 
	//void			OnmaQGChange(); 
	//void			OnmaQGSetfocus(); 
	//void			OnmaQGKillfocus(); 
	int			OnmaQGCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPostToAPISelect(); 
	void			OnUnPostSelect(); 
	long			OnListPostLoadData(); 
	void			OnListPostSelectChange(int nOldItem, int nNewItem); 
	void			OnListPostDblClick(); 
	int			OnListPostDeleteItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	CPMSysPurchaseToDuocQG(CWnd *pParent);
	~CPMSysPurchaseToDuocQG();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSysPurchaseToDuocQG(); 
	int OnEditPMSysPurchaseToDuocQG(); 
	int OnDeletePMSysPurchaseToDuocQG(); 
	int OnSavePMSysPurchaseToDuocQG(); 
	int OnCancelPMSysPurchaseToDuocQG(); 
	int OnPMSysPurchaseToDuocQGListLoadData(); 
	int OnCreateData();
};
#endif
