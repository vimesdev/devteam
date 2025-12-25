#ifndef PARACLINICALINFORMATIONVIEW_H
#define PARACLINICALINFORMATIONVIEW_H

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
class AFX_EXT_CLASS CParaclinicalInformationView : public CGuiDialog
{

protected: CString m_szPermGroupID;
public:
	CGuiGroupBox	m_wndParaclinicalInformation;
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndParaclinicalNameLabel;
	CGuiTextCtrl	m_wndParaclinicalName;
	CGuiLabel		m_wndTotalLabel;
	CGuiLabel		m_wndBarCodeLabel;
	CGuiTextCtrl	m_wndBarcodeName;
	CGuiNumberCtrl	m_wndTotal;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton	m_wndServiceLabel;
	CGuiRadioButton	m_wndInsuranceandSolderLabel;
	CGuiRadioButton	m_wndAllLabel;
	CGuiCheckBox	m_wndSubItems;
	CGuiButton		m_wndUpdate;
	CString	m_szDeptKey;
	CString	m_szParaclinicalName;	
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiRadioButton	m_wndSOD;
	CGuiRadioButton	m_wndOutpatient;
	CGuiRadioButton	m_wndInpatient;
	CGuiRadioButton	m_wndAll;
	CString	m_szBarcodeName;
	CString	m_szFromDate;
	CString	m_szToDate;
	CGuiNumberCtrl	m_wndTotalBarcode;
	int	m_nSOD;
	int	m_nOutpatient;
	int	m_nInpatient;
	int	m_nAll;
	long	m_nTotal;
	int	m_nServiceLabel;
	int	m_nInsuranceandSolderLabel;
	int	m_nAllLabel;
	long	m_nTotalBarcode;
	BOOL	m_bSubItems;
	void			OnSearchSelect(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew(); 
	//void			OnParaclinicalNameChange(); 
	//void			OnParaclinicalNameSetfocus(); 
	//void			OnParaclinicalNameKillfocus(); 
	int			OnParaclinicalNameCheckValue();
	int			OnBarcodeNameCheckValue();
	//void			OnTotalChange(); 
	//void			OnTotalSetfocus(); 
	//void			OnTotalKillfocus(); 
	int			OnTotalCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnServiceLabelSelect(); 
	void			OnInsuranceandSolderLabelSelect(); 
	void			OnAllLabelSelect(); 
	void			OnSubItemsSelect(); 
	void			OnUpdateSelect(); 
	int			OnFromDateCheckValue(); 
	int			OnToDateCheckValue(); 
	void			OnSODSelect(); 
	void			OnOutpatientSelect(); 
	void			OnInpatientSelect(); 
	void			OnAllSelect(); 
	int 			OnExport(); 
	CParaclinicalInformationView(CWnd *pParent);
	~CParaclinicalInformationView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddParaclinicalInformation(); 
	int OnEditParaclinicalInformation(); 
	int OnDeleteParaclinicalInformation(); 
	int OnSaveParaclinicalInformation(); 
	int OnCancelParaclinicalInformation(); 
	int OnParaclinicalInformationListLoadData();
	int	OnTotalBarcodeCheckValue(); 
};
#endif