#ifndef HMSRETURNENTRYDIALOG_H
#define HMSRETURNENTRYDIALOG_H

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
class CHMSReturnEntryDialog : public CGuiDialog{
protected:
	
public:
	long			m_nNewOrderID;
	long			m_nOldOrderID;
	int				m_nFromStockID;

	CGuiLabel		m_wndFromOrderLabel;
	CGuiComboBox	m_wndFromOrder;
	CGuiLabel		m_wndNameCntLabel;
	CGuiComboBox	m_wndNameCnt;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szFromOrderKey;
	CString	m_szNameCntKey;
	float	m_nQuantity;
	float	m_nMaxQty;

	void			OnFromOrderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromOrderSelendok(); 
	//void			OnFromOrderSetfocus(); 
	//void			OnFromOrderKillfocus(); 
	long			OnFromOrderLoadData(); 
	//void			OnFromOrderAddNew(); 
	void			OnNameCntSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameCntSelendok(); 
	//void			OnNameCntSetfocus(); 
	//void			OnNameCntKillfocus(); 
	long			OnNameCntLoadData(); 
	//void			OnNameCntAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSReturnEntryDialog(CWnd *pParent);
	~CHMSReturnEntryDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSReturnEntryDialog(); 
	int OnEditHMSReturnEntryDialog(); 
	int OnDeleteHMSReturnEntryDialog(); 
	int OnSaveHMSReturnEntryDialog(); 
	int OnCancelHMSReturnEntryDialog(); 
	int OnHMSReturnEntryDialogListLoadData(); 
};
#endif
