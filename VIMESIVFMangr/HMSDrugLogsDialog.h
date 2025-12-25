#ifndef HMSDRUGLOGSDIALOG_H
#define HMSDRUGLOGSDIALOG_H

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


class CHMSDrugLogsDialog : public CGuiDialog{
protected:
	CString		m_szIndexLabel;
	CString		m_szDescriptionLabel;
	CString		m_szUnitLabel;
	CString		m_szQtyLabel;
	CString		m_szDayNumberLabel;
	CString		m_szStartDateLabel;
	CString		m_szDoctorLabel;
	long		m_nDrugLogs_ID;

	CString		m_szStorages;

public:
	long		m_nPatientNo;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	CString		m_szDoctor;

	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndProductItemLabel;
	CGuiComboBox	m_wndProductItem;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndDayNumberLabel;
	CGuiGroupBox	m_wndDrugLogs;
	CGuiNumberCtrl	m_wndDayNumber;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndPeriodLabel;
	CGuiComboBox	m_wndPeriod;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndClose;
	CString	m_szProductItemKey;
	float	m_nQuantity;
	long	m_nDayNumber;
	CString	m_szFromDate;
	CString	m_szNote;
	CString	m_szPeriodKey;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnProductItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductItemSelendok(); 
	//void			OnProductItemSetfocus(); 
	//void			OnProductItemKillfocus(); 
	long			OnProductItemLoadData(); 
	//void			OnProductItemAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnDayNumberChange(); 
	//void			OnDayNumberSetfocus(); 
	//void			OnDayNumberKillfocus(); 
	int			OnDayNumberCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPeriodSelendok(); 
	//void			OnPeriodSetfocus(); 
	//void			OnPeriodKillfocus(); 
	long			OnPeriodLoadData(); 
	//void			OnPeriodAddNew(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnCloseSelect(); 
	CHMSDrugLogsDialog(CWnd *pParent);
	~CHMSDrugLogsDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDrugLogsDialog(); 
	int OnEditHMSDrugLogsDialog(); 
	int OnDeleteHMSDrugLogsDialog(); 
	int OnSaveHMSDrugLogsDialog(); 
	int OnCancelHMSDrugLogsDialog(); 
	int OnHMSDrugLogsDialogListLoadData(); 
};
#endif
