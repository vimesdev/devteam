#ifndef HMSSERVICEPACKAGECLOSEDATADIALOG_H
#define HMSSERVICEPACKAGECLOSEDATADIALOG_H

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
class CHMSServicePackageCloseDataDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndPackageLabel;
	CGuiComboBox	m_wndPackage;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndSearch;
	CGridListView	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndMark;
	CGuiButton		m_wndUnMark;
	CString	m_szToDate;
	CString	m_szPackageKey;
	CString	m_szDescription;
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPackageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPackageSelendok(); 
	//void			OnPackageSetfocus(); 
	//void			OnPackageKillfocus(); 
	long			OnPackageLoadData(); 
	//void			OnPackageAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void	OnMarkSelect();
	void	OnUnMarkSelect();

	CHMSServicePackageCloseDataDialog(CWnd *pParent);
	~CHMSServicePackageCloseDataDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSServicePackageCloseDataDialog(); 
	int OnEditHMSServicePackageCloseDataDialog(); 
	int OnDeleteHMSServicePackageCloseDataDialog(); 
	int OnSaveHMSServicePackageCloseDataDialog(); 
	int OnCancelHMSServicePackageCloseDataDialog(); 
	int OnHMSServicePackageCloseDataDialogListLoadData(); 
};
#endif
