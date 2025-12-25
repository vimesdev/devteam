#ifndef HMSSETUPREGIMEFEEDIALOG_H
#define HMSSETUPREGIMEFEEDIALOG_H

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
class CHMSSetupRegimeFeeDialog : public CGuiDialog{
protected:
public:
	CString		m_szDischarge;
	CGuiGroupBox	m_wndRegimeFeeInfo;
	CGuiLabel		m_wndFoodAmountLabel;
	CGuiNumberCtrl	m_wndFoodAmount;
	CGuiLabel		m_wndSalaryAmountLabel;
	CGuiNumberCtrl	m_wndSalaryAmount;
	CGuiLabel		m_wndTransportAmountLabel;
	CGuiNumberCtrl	m_wndTransportAmount;
	CGuiLabel		m_wndStampAmountLabel;
	CGuiNumberCtrl	m_wndStampAmount;
	CGuiLabel		m_wndHolidayAmountLabel;
	CGuiNumberCtrl	m_wndHolidayAmount;
	CGuiLabel		m_wndOtherAmountLabel;
	CGuiNumberCtrl	m_wndOtherAmount;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;

	CGuiButton		m_wndUpdate;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;

	double	m_nFoodAmount;
	double	m_nSalaryAmount;
	double	m_nTransportAmount;
	double	m_nStampAmount;
	double	m_nHolidayAmount;
	double	m_nOtherAmount;
	CString	m_szNote;

	long m_nDocumentNo;
	long m_nPatientNo;
	long m_nInvoiceNo;

	CString m_szDept;
	CString m_szDate;
	CString m_szStaff;
	double m_nTotalCost;
	long m_nFeeID;

	bool m_bIsPaid;

	CDbfMap	m_hms_fee_soldTbl;

	//void			OnFoodAmountChange(); 
	//void			OnFoodAmountSetfocus(); 
	//void			OnFoodAmountKillfocus(); 
	int			OnFoodAmountCheckValue(); 
	//void			OnSalaryAmountChange(); 
	//void			OnSalaryAmountSetfocus(); 
	//void			OnSalaryAmountKillfocus(); 
	int			OnSalaryAmountCheckValue(); 
	//void			OnTransportAmountChange(); 
	//void			OnTransportAmountSetfocus(); 
	//void			OnTransportAmountKillfocus(); 
	int			OnTransportAmountCheckValue(); 
	//void			OnStampAmountChange(); 
	//void			OnStampAmountSetfocus(); 
	//void			OnStampAmountKillfocus(); 
	int			OnStampAmountCheckValue(); 
	//void			OnHolidayAmountChange(); 
	//void			OnHolidayAmountSetfocus(); 
	//void			OnHolidayAmountKillfocus(); 
	int			OnHolidayAmountCheckValue(); 
	//void			OnOtherAmountChange(); 
	//void			OnOtherAmountSetfocus(); 
	//void			OnOtherAmountKillfocus(); 
	int			OnOtherAmountCheckValue();
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue();

	void			OnUpdateSelect();

	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();

	CHMSSetupRegimeFeeDialog(CWnd *pParent);
	~CHMSSetupRegimeFeeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSetupRegimeFeeDialog(); 
	int OnEditHMSSetupRegimeFeeDialog(); 
	int OnDeleteHMSSetupRegimeFeeDialog(); 
	int OnSaveHMSSetupRegimeFeeDialog(); 
	int OnCancelHMSSetupRegimeFeeDialog(); 
	int OnHMSSetupRegimeFeeDialogListLoadData(); 
};
#endif
