#ifndef HMSFEEPRICESCHEMALINESETUPDIALOG_H
#define HMSFEEPRICESCHEMALINESETUPDIALOG_H

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
class CHMSFeePriceSchemaLineSetupDialog : public CGuiDialog{
protected:
public:
	long m_nPriceSchemaLineID;
	CGuiLabel		m_wndFeeLabel;
	CGuiComboBox	m_wndFee;
	CGuiLabel		m_wndExpenseLabel;
	CGuiComboBox	m_wndExpense;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szFeeKey;
	CString	m_szExpenseKey;
	float	m_nQty;
	float	m_nAmount;
	void			OnFeeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeSelendok(); 
	//void			OnFeeSetfocus(); 
	//void			OnFeeKillfocus(); 
	long			OnFeeLoadData(); 
	//void			OnFeeAddNew(); 
	void			OnExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseSelendok(); 
	//void			OnExpenseSetfocus(); 
	//void			OnExpenseKillfocus(); 
	long			OnExpenseLoadData(); 
	//void			OnExpenseAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSFeePriceSchemaLineSetupDialog(CWnd *pParent, int nMode);
	~CHMSFeePriceSchemaLineSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeePriceSchemaLineSetupDialog(); 
	int OnEditHMSFeePriceSchemaLineSetupDialog(); 
	int OnDeleteHMSFeePriceSchemaLineSetupDialog(); 
	int OnSaveHMSFeePriceSchemaLineSetupDialog(); 
	int OnCancelHMSFeePriceSchemaLineSetupDialog(); 
};
#endif
