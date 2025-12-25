#ifndef HMSFEEEXTRADIALOG_H
#define HMSFEEEXTRADIALOG_H

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
#include "GridListView.h"
class CHMSFeeExtraDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndOrderIdLabel;
	CGuiNumberCtrl	m_wndOrderId;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndTiengiuongLabel;
	CGuiNumberCtrl	m_wndReqBed;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiComboBox	m_wndDescription;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctorName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndMienLabel;
	CGuiNumberCtrl	m_wndMiengiam;
	CGuiButton		m_wndAddLine;
	CGridListView	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndDisconfirm;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	long	m_nOrderId;
	CString	m_szOrderDate;
	CString	m_szDescriptionKey;
	CString	m_szDoctorNameKey;
	float	m_nQuantity;
	double	m_nUnitPrice;
	long	m_nReqBed;
	long	m_nMiengiam;
	CString		m_szStatus;
	CString		m_szKCK;
	CString		m_szDoctorID;
	//void			OnOrderIdChange(); 
	//void			OnOrderIdSetfocus(); 
	//void			OnOrderIdKillfocus(); 
	int			OnOrderIdCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescriptionSelendok(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	long			OnDescriptionLoadData(); 
	//void			OnDescriptionAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue();
	int			OnReqBedCheckValue();
	long			OnDoctorNameLoadData();
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	int			OnMiengiamCheckValue();
	void			OnApplySelect(); 
	void			OnDisconfirmSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 

	void	AddNewOrder();
	int		AddNewLine();

	CHMSFeeExtraDialog(CWnd *pParent, int nMode);
	~CHMSFeeExtraDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeExtraDialog(); 
	int OnEditHMSFeeExtraDialog(); 
	int OnDeleteHMSFeeExtraDialog(); 
	int OnSaveHMSFeeExtraDialog(); 
	int OnCancelHMSFeeExtraDialog(); 
	int OnHMSFeeExtraDialogListLoadData(); 
};
#endif
