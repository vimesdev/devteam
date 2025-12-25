#ifndef HMSCANCERDRUGORDERDIALOG_H
#define HMSCANCERDRUGORDERDIALOG_H

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
class CHMSCancerDrugOrderDialog : public CGuiDialog{
protected:
public:
	long	m_cancer_order_id;
	long	m_cancer_orderline_id;
	int		m_nUomID;
	CString m_szCancerDiagramID;

	CGuiGroupBox	m_wndDrugInformation;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiNumberCtrl	m_wndOrderQty;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndName2Label;
	CGuiComboBox	m_wndName2;
	CGuiLabel		m_wndQuantity2Label;
	CGuiNumberCtrl	m_wndQuantity2;
	CGuiLabel		m_wndName3Label;
	CGuiComboBox	m_wndName3;
	CGuiLabel		m_wndQuantity3Label;
	CGuiNumberCtrl	m_wndQuantity3;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndUsageLabel;
	CGuiComboBox	m_wndUsage;
	CGuiTextCtrl	m_wndUsageDesc;
	CGuiLabel		m_wndUsage1Label;
	CGuiComboBox	m_wndUsage1;
	CGuiTextCtrl	m_wndUsage1Desc;
	CGuiLabel		m_wndUsage2Label;
	CGuiComboBox	m_wndUsage2;
	CGuiTextCtrl	m_wndUsage2Desc;
	CGuiLabel		m_wndTenphacdoLabel;
	CGuiTextCtrl	m_wndTenphacdo;
	CGuiLabel		m_wndDonviLabel;
	CGuiTextCtrl	m_wndDonvi;
	CGuiLabel		m_wndLieuDungLabel;
	CGuiNumberCtrl	m_wndLieuDung;
	CGuiLabel		m_wndDiengiaiLabel;
	CGuiTextCtrl	m_wndDiengiai;
	CGuiCheckBox	m_wndCheckName2;
	CGuiCheckBox	m_wndCheckName3;

	CString	m_szStorageKey;
	float	m_nOrderQty;
	CString	m_szNameKey;
	float	m_nQuantity;
	CString	m_szName2Key;
	float	m_nQuantity2;
	CString	m_szName3Key;
	float	m_nQuantity3;
	CString	m_szUsageKey;
	CString	m_szUsageDesc;
	CString	m_szUsage1Key;
	CString	m_szUsage1Desc;
	CString	m_szUsage2Key;
	CString	m_szUsage2Desc;
	CString	m_szTenphacdo;
	CString	m_szDonvi;
	long	m_nLieuDung;
	BOOL	m_bCheckName2;
	BOOL	m_bCheckName3;
	CString	m_szDiengiai;

	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnOrderQtyChange(); 
	//void			OnOrderQtySetfocus(); 
	//void			OnOrderQtyKillfocus(); 
	int			OnOrderQtyCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnName2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName2Selendok(); 
	//void			OnName2Setfocus(); 
	//void			OnName2Killfocus(); 
	long			OnName2LoadData(); 
	//void			OnName2AddNew(); 
	//void			OnQuantity2Change(); 
	//void			OnQuantity2Setfocus(); 
	//void			OnQuantity2Killfocus(); 
	int			OnQuantity2CheckValue(); 
	void			OnName3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnName3Selendok(); 
	//void			OnName3Setfocus(); 
	//void			OnName3Killfocus(); 
	long			OnName3LoadData(); 
	//void			OnName3AddNew(); 
	//void			OnQuantity3Change(); 
	//void			OnQuantity3Setfocus(); 
	//void			OnQuantity3Killfocus(); 
	int			OnQuantity3CheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnUsageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUsageSelendok(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	long			OnUsageLoadData(); 
	//void			OnUsageAddNew(); 
	//void			OnUsageDescChange(); 
	//void			OnUsageDescSetfocus(); 
	//void			OnUsageDescKillfocus(); 
	int			OnUsageDescCheckValue(); 
	void			OnUsage1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUsage1Selendok(); 
	//void			OnUsage1Setfocus(); 
	//void			OnUsage1Killfocus(); 
	long			OnUsage1LoadData(); 
	//void			OnUsage1AddNew(); 
	//void			OnUsage1DescChange(); 
	//void			OnUsage1DescSetfocus(); 
	//void			OnUsage1DescKillfocus(); 
	int			OnUsage1DescCheckValue(); 
	void			OnUsage2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUsage2Selendok(); 
	//void			OnUsage2Setfocus(); 
	//void			OnUsage2Killfocus(); 
	long			OnUsage2LoadData(); 
	//void			OnUsage2AddNew(); 
	//void			OnUsage2DescChange(); 
	//void			OnUsage2DescSetfocus(); 
	//void			OnUsage2DescKillfocus(); 
	int			OnUsage2DescCheckValue(); 
	void			OnCheckName2Select(); 
	void			OnCheckName3Select(); 
	CHMSCancerDrugOrderDialog(CWnd *pParent);
	~CHMSCancerDrugOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerDrugOrderDialog(); 
	int OnEditHMSCancerDrugOrderDialog(); 
	int OnDeleteHMSCancerDrugOrderDialog(); 
	int OnSaveHMSCancerDrugOrderDialog(); 
	int OnCancelHMSCancerDrugOrderDialog(); 
	int OnHMSCancerDrugOrderDialogListLoadData(); 
};
#endif
