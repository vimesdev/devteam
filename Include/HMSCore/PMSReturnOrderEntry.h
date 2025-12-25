#ifndef PMSRETURNORDERENTRY_H
#define PMSRETURNORDERENTRY_H

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
class CPMSReturnOrderEntry : public CGuiView{
protected:
public:
	int		m_nImportStockID;
	int		m_nReturnStockID;
	CString	m_szID;
	CString	m_szOrderDate;
	CGuiGroupBox	m_wndAddEntry;
	CGuiLabel		m_wndNameCntLabel;
	CGuiComboBox	m_wndNameCnt;
	CGuiLabel		m_wndMaxQuantityLabel;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szNameCntKey;
	long	m_nMaxQuantity;
	long	m_nQuantity;
	CDbfMap	m_pms_returnorder_lineTbl;
	void			OnNameCntSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameCntSelendok(); 
	//void			OnNameCntSetfocus(); 
	//void			OnNameCntKillfocus(); 
	long			OnNameCntLoadData(); 
	void			OnNameCntAddNew(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPMSReturnOrderEntry();
	~CPMSReturnOrderEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSStockTransferEntry(); 
	int OnEditPMSStockTransferEntry(); 
	int OnDeletePMSStockTransferEntry(); 
	int OnSavePMSStockTransferEntry(); 
	int OnCancelPMSStockTransferEntry(); 
	int OnPMSStockTransferEntryListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
