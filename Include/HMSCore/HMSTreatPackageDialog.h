#ifndef HMSTREATPACKAGEDIALOG_H
#define HMSTREATPACKAGEDIALOG_H

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
//#define VM_TERM 0x08

class CHMSTreatPackageDialog : public CGuiDialog{
protected:
public:
	long	m_nPackageId;
	long	m_nOptIdx;
	CString m_szType, m_szItemId;
	CString m_szStatus, m_szPaymentStatus;

	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndBeginDateLabel;
	CGuiDateTimeCtrl	m_wndBeginDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiCheckBox		m_wndIncludeExmFee;

	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndCostLabel;
	CGuiNumberCtrl	m_wndCost;
	CGuiLabel		m_wndDiffCostLabel;
	CGuiNumberCtrl	m_wndDiffCost;
	CGuiButton		m_wndLoadFee;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndDetailList;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMarkAll;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szItemKey;
	CString	m_szDescription;
	CString	m_szBeginDate;
	CString	m_szEndDate;
	CString	m_szAdmitDate;
	double	m_nAmount;
	double	m_nCost;
	double	m_nDiffCost;
	BOOL	m_bIncludeExmFee;
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnBeginDateChange(); 
	//void			OnBeginDateSetfocus(); 
	//void			OnBeginDateKillfocus(); 
	int			OnBeginDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnCostChange(); 
	//void			OnCostSetfocus(); 
	//void			OnCostKillfocus(); 
	int			OnCostCheckValue(); 
	//void			OnDiffCostChange(); 
	//void			OnDiffCostSetfocus(); 
	//void			OnDiffCostKillfocus(); 
	int			OnDiffCostCheckValue(); 
	void			OnLoadFeeSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnDetailListLoadData(); 
	void			OnDetailListSelectChange(int nOldItem, int nNewItem); 
	void			OnDetailListDblClick(); 
	int			OnDetailListDeleteItem(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkAllSelect(); 
	void			OnApplySelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSTreatPackageDialog(CWnd *pParent, int nMode);
	~CHMSTreatPackageDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bApplyAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatPackageDialog(); 
	int OnEditHMSTreatPackageDialog(); 
	int OnDeleteHMSTreatPackageDialog(); 
	int OnSaveHMSTreatPackageDialog(); 
	int OnCancelHMSTreatPackageDialog(); 
	int OnHMSTreatPackageDialogListLoadData(); 
	
};
#endif
