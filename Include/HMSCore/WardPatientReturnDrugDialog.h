#ifndef CWARDPATIENTRETURNDRUGDIALOG_H
#define CWARDPATIENTRETURNDRUGDIALOG_H

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

typedef struct DrugListReturn{
	long	Product_id;	
	long	Product_item_id;	
	CString product_name;
	CString product_uomname;
	CString product_countryname;	
	double	hpol_unitprice;
	double	hpol_qtyreverse;
} RETURNITEM;





class CWardPatientReturnDrugDialog : public CGuiDialog{
protected:
public:
	long	m_nTransactionID;
	long	m_nDocno;
	long	m_nOrderID;
	long	m_nOrderLine;
	int		m_nStorageID;
	int		m_nStorageToID;
	long	m_nProductItemID;
	CWnd*		m_wndOrder;
	double	m_nQuantity;
	double	m_nUnitPrice;
	double	m_nOnHand;
	CString m_szProductKey;
	CString	m_szOrgID;
	CString m_szTransactionType;
	CString	m_szIsEMOperation;
	CString m_szIsOutPatient;
	CString m_sDept;

	

	CGuiGroupBox	m_wndGroupDrugList;
	CGuiGroupBox	m_wndGroupPatientList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndPreview;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndDrugList;
	CDbfMap	m_transactionlineTbl;
	void			OnApplySelect(); 
	void			OnPreviewSelect(); 
	void			OnCloseSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListAddToSheetItem(); 
	int			OnPatientListCheckAllItem(); 
	int			OnPatientListUnCheckAllItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	CWardPatientReturnDrugDialog(CWnd *pParent);
	~CWardPatientReturnDrugDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCWardPatientReturnDrugDialog(); 
	int OnEditCWardPatientReturnDrugDialog(); 
	int OnDeleteCWardPatientReturnDrugDialog(); 
	int OnSaveCWardPatientReturnDrugDialog(); 
	int OnCancelCWardPatientReturnDrugDialog(); 
	int OnCWardPatientReturnDrugDialogListLoadData(); 
	void	OnUpdateState(long nOrderID, long nProductItem_ID, bool bCheck );
	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
protected:
//	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	afx_msg void OnLvnItemchangedList(NMHDR *pNMHDR, LRESULT *pResult);
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
