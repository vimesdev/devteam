#ifndef HMS108BLLOODORDERDIALOG_H
#define HMS108BLLOODORDERDIALOG_H

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
class CHMS108BloodOrderDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndBloodSheetList;
	CGridListView	m_wndBloodOrderSheetList;
	//CGuiListCtrl	m_wndItemList;
	CGridListView	m_wndItemList;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndPatNameLabel;
	
	CGuiComboBox	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYOB;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndObjectNameLabel;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndNhommauLabel;
	CGuiTextCtrl	m_wndNhomMau;
	CGuiLabel		m_wndChephamLabel;
	CGuiComboBox	m_wndChePham;
	CGuiLabel		m_wndSoluongLabel;
	CGuiNumberCtrl	m_wndSoluong;
	CGuiLabel		m_wndNgaydungLabel;
	CGuiDateCtrl	m_wndNgaySuDung;
	CGuiLabel		m_wndGhiChuLabel;
	CGuiTextCtrl	m_wndGhiChu;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndSearch;
	CString	m_szFromDate;
	CString	m_szToDate;
	int			OnFromDateCheckValue(); 
	int			OnToDateCheckValue(); 
	void		OnSearchSelect(); 

	CString	m_szGroupKey;
	CString	m_szNameKey;
	float	m_nQty;
	long	m_nDocno;
	CString	m_szPatientNameKey;
	CString m_szPatname;
	CString	m_szYOB;
	CString	m_szSex;
	CString	m_szObjectName;
	CString	m_szDiagnostic;
	CString	m_szNhomMau;
	CString	m_szChePhamKey;
	float	m_nSoluong;
	CString	m_szNgaySuDung;
	CString	m_szGhiChu;
	CString	m_szProfileID;
	long	m_nOrderID;
	long	m_nOrderLineID;
	CString m_szSheetStatus;
	CDbfMap	m_hms_bloodorder_lineTbl;
	

	long			BloodSheetListLoadData(); 
	void			BloodSheetListSelectChange(int nOldItem, int nNewItem); 
	void			BloodSheetListDblClick(); 
	int			BloodSheetListAddItem(); 
	int			BloodSheetListDeleteItem();
	int			BloodSheetListConfirmItem();
	int			BloodSheetListDisConfirmItem();
	int			BloodSheetListPrintItem();
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick();
	int			OnItemListEditItem(); 
	int			OnItemListDeleteItem(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	void			OnNameAddNew(); 
//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnAddSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect();
	void			OnPrintSelect();
	CHMS108BloodOrderDialog(CWnd *pParent);
	~CHMS108BloodOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	int			OnDocnoCheckValue(); 
	long			OnPatientNameLoadData();
	void			OnPatientNameSelendok(); 
	int			OnYOBCheckValue(); 
	int			OnSexCheckValue(); 
	int			OnObjectNameCheckValue(); 
	int			OnDiagnosticCheckValue(); 
	long			OnNhomMauLoadData(); 
	long			OnChePhamLoadData(); 
	int			OnSoluongCheckValue(); 
	int			OnNgaySuDungCheckValue(); 
	int			OnGhiChuCheckValue();
	int			OnNhomMauCheckValue();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAdd108BloodOrderDialog(); 
	int OnEdit108BloodOrderDialog(); 
	int OnDelete108BloodOrderDialog(); 
	int OnSave108BloodOrderDialog(); 
	int OnCancel108BloodOrderDialog(); 
	int On108BloodOrderDialogListLoadData();
	void UpdateJson(BOOL bSaveAndValidate);
};
#endif