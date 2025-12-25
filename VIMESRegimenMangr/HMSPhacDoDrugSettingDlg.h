#ifndef HMSPHACDODRUGSETTINGDLG_H
#define HMSPHACDODRUGSETTINGDLG_H

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
class CHMSPhacDoDrugSettingDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGrpClassInfor;
	CGuiLabel		m_wndClassLabel;
	CGuiComboBox	m_wndClass;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndVolumnLabel;
	CGuiNumberCtrl	m_wndVolumn;
	CGuiLabel		m_wndDousageLabel;
	CGuiTextCtrl	m_wndDousage;
	CGuiButton		m_wndDousageBtn;
	CGuiLabel		m_wndDrugListLabel;
	CGuiTextCtrl	m_wndDrugList;
	CGuiButton		m_wndDrugListBtn;
	CGuiLabel		m_wndUsermanualLabel;
	CGuiTextCtrl	m_wndUserManual;
	CGuiLabel		m_wndInfusionLabel;
	CGuiTextCtrl	m_wndInfusion;
	CGuiButton		m_wndInfutionBtn;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;

	CString	m_szClassKey;
	CString	m_szUnit;
	CString	m_szContent;
	long	m_nVolumn;
	CString	m_szDousage;
	CString	m_szDrugList;
	CString m_szDrugListName;
	CString	m_szUserManual;
	CString	m_szInfusion;
	CString	m_szInfusionName;
	long	m_nPhacDoID;
	long	m_nPhacDoLineID;
	long	m_nIdx;
	void			OnClassSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClassSelendok(); 
	//void			OnClassSetfocus(); 
	//void			OnClassKillfocus(); 
	long			OnClassLoadData(); 
	//void			OnClassAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnVolumnChange(); 
	//void			OnVolumnSetfocus(); 
	//void			OnVolumnKillfocus(); 
	int			OnVolumnCheckValue(); 
	//void			OnDousageChange(); 
	//void			OnDousageSetfocus(); 
	//void			OnDousageKillfocus(); 
	int			OnDousageCheckValue(); 
	void			OnDousageBtnSelect(); 
	//void			OnDrugListChange(); 
	//void			OnDrugListSetfocus(); 
	//void			OnDrugListKillfocus(); 
	int			OnDrugListCheckValue(); 
	void			OnDrugListBtnSelect(); 
	//void			OnUserManualChange(); 
	//void			OnUserManualSetfocus(); 
	//void			OnUserManualKillfocus(); 
	int			OnUserManualCheckValue(); 
	//void			OnInfusionChange(); 
	//void			OnInfusionSetfocus(); 
	//void			OnInfusionKillfocus(); 
	int			OnInfusionCheckValue(); 
	void			OnInfutionBtnSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSPhacDoDrugSettingDlg(CWnd *pParent);
	~CHMSPhacDoDrugSettingDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoDrugSettingDlg(); 
	int OnEditHMSPhacDoDrugSettingDlg(); 
	int OnDeleteHMSPhacDoDrugSettingDlg(); 
	int OnSaveHMSPhacDoDrugSettingDlg(); 
	int OnCancelHMSPhacDoDrugSettingDlg(); 
	int OnHMSPhacDoDrugSettingDlgListLoadData(); 
};
#endif
