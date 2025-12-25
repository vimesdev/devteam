#ifndef AdContractPackageDialog_H
#define AdContractPackageDialog_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
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

class AFX_EXT_CLASS CAdContractPackageDialog : public CGuiDialog
{
protected:
	CWnd*			m_pParent;
	int				m_nMode;
	CString			m_szPath;
	CDbfMap			m_ad_contractTbl;
	
public:
	long	m_nPackageId;
	

	CGuiGroupBox	m_wndContractGroup;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndDurationLabel;
	CGuiNumberCtrl	m_wndDuration;
	CGuiLabel		m_wndMethodLabel;
	CGuiComboBox	m_wndMethod;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndQuyetdinhpheduyetlabel;
	CGuiTextCtrl	m_wndQuyetdinhpheduyet;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szID;
	long	m_nYear;
	CString	m_szDescription;
	CString	m_szDate;
	int		m_nDuration;
	CString	m_szMethodKey;
	double	m_nAmount;
	CString	m_szQuyetdinhpheduyet;
	BOOL	m_bActive;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnDurationChange(); 
	//void			OnDurationSetfocus(); 
	//void			OnDurationKillfocus(); 
	int			OnDurationCheckValue(); 
	void			OnMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMethodSelendok(); 
	//void			OnMethodSetfocus(); 
	//void			OnMethodKillfocus(); 
	long			OnMethodLoadData(); 
	//void			OnMethodAddNew(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue();
	int			OnQuyetdinhpheduyetCheckValue(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAdContractPackageDialog(CWnd *pParent, int nMode, long nId);
	~CAdContractPackageDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdContractPackageDialog(); 
	int OnEditAdContractPackageDialog(); 
	int OnDeleteAdContractPackageDialog(); 
	int OnSaveAdContractPackageDialog(); 
	int OnCancelAdContractPackageDialog(); 
	int OnAdContractPackageDialogListLoadData(); 	
};
#endif