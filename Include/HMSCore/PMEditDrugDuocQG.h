#ifndef PMEDITDRUGDUOCQG_H
#define PMEDITDRUGDUOCQG_H

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
class AFX_EXT_CLASS CPMEditDrugDuocQG : public CGuiDialog{
protected:
public:
	long	m_nDocNo;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndRegCodeLabel;
	CGuiTextCtrl	m_wndRegcode;
	CGuiLabel		m_wndLotnoLabel;
	CGuiTextCtrl	m_wndLotno;
	CGuiLabel		m_wndDrugCodeLabel;
	CGuiComboBox	m_wndDrugCode;
	CGuiTextCtrl	m_wndMaQG;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndExit;
	CGuiButton		m_wndAddNewItem;
	CString	m_szDrugName;
	CString	m_szRegcode;
	CString	m_szLotno;
	CString	m_szDrugCodeKey;
	CString	m_szMaQG;
	long	m_nOrderID;
	long	m_nProduct_Item_id;
	int		m_nStockId;
	CString m_szOption;
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnRegcodeChange(); 
	//void			OnRegcodeSetfocus(); 
	//void			OnRegcodeKillfocus(); 
	int			OnRegcodeCheckValue(); 
	//void			OnLotnoChange(); 
	//void			OnLotnoSetfocus(); 
	//void			OnLotnoKillfocus(); 
	int			OnLotnoCheckValue(); 
	void			OnDrugCodeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugCodeSelendok(); 
	//void			OnDrugCodeSetfocus(); 
	//void			OnDrugCodeKillfocus(); 
	long			OnDrugCodeLoadData(); 
	//void			OnDrugCodeAddNew(); 
	//void			OnMaQGChange(); 
	//void			OnMaQGSetfocus(); 
	//void			OnMaQGKillfocus(); 
	int			OnMaQGCheckValue(); 
	void			OnSaveSelect(); 
	void			OnExitSelect(); 
	void			OnAddNewItemSelect();
	CPMEditDrugDuocQG(CWnd *pParent,CString szOption);
	~CPMEditDrugDuocQG();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMEditDrugDuocQG(); 
	int OnEditPMEditDrugDuocQG(); 
	int OnDeletePMEditDrugDuocQG(); 
	int OnSavePMEditDrugDuocQG(); 
	int OnCancelPMEditDrugDuocQG(); 
	int OnPMEditDrugDuocQGListLoadData(); 
};
#endif
