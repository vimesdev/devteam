#ifndef HMSDAILYFOODPATIENTLISTDIALOG_H
#define HMSDAILYFOODPATIENTLISTDIALOG_H

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
class CHMSDailyFoodPatientListDialog : public CGuiDialog{
protected:
	bool	m_bAddOrder;	
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szDept;
	int		m_nRoomID;
	int		m_nBedID;
	int		m_nRefIndex;
	int		m_nType;
public:
	CWnd*	m_pWndOrder;
	CGuiGroupBox	m_wndGroupPatientList;
	CGuiListCtrl	m_wndPatientList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndAntruaLabel;
	CGuiComboBox	m_wndAntrua;
	CGuiLabel		m_wndAnToiLabel;
	CGuiComboBox	m_wndAnToi;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndSheetOldLabel;
	CGuiComboBox	m_wndSheetOld;
	CGuiCheckBox	m_wndSheetFoodSelectOld;

	CString	m_szAntruaKey;
	CString	m_szAnToiKey;
	CString	m_szDoctor;
	CString m_szOrderDate;
	CString m_szUsage;
	CString m_szPatientName;
	CString	m_szSheetOldKey;
	BOOL	m_bSheetFoodSelectOld;

	CDbfMap	m_hms_feefodorderTbl;
	CDbfMap	m_hms_feefodorderlineTbl;
	long	m_nOID;
	long	m_nOrderNoOld;
	int	m_nQty;
	int	m_nQty2;
	int				OnPatientNameCheckValue();
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	int			OnPatientListSelectAllItem(); 
	int			OnPatientListUnselectAllItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void			OnAntruaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAntruaSelendok(); 
	//void			OnAntruaSetfocus(); 
	//void			OnAntruaKillfocus(); 
	long			OnAntruaLoadData(); 
	//void			OnAntruaAddNew(); 
	void			OnAnToiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnToiSelendok(); 
	//void			OnAnToiSetfocus(); 
	//void			OnAnToiKillfocus(); 
	long			OnAnToiLoadData(); 
	//void			OnAnToiAddNew(); 
	void			OnSheetOldSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSheetOldSelendok(); 
	//void			OnSheetOldSetfocus(); 
	//void			OnSheetOldKillfocus(); 
	long			OnSheetOldLoadData(); 
	//void			OnSheetOldAddNew(); 
	void			OnSheetFoodSelectOldSelect(); 

	CHMSDailyFoodPatientListDialog(CWnd *pParent);
	~CHMSDailyFoodPatientListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDailyFoodPatientListDialog(); 
	int OnEditHMSDailyFoodPatientListDialog(); 
	int OnDeleteHMSDailyFoodPatientListDialog(); 
	int OnSaveHMSDailyFoodPatientListDialog(); 
	int OnCancelHMSDailyFoodPatientListDialog(); 
	int OnHMSDailyFoodPatientListDialogListLoadData(); 
};
#endif
