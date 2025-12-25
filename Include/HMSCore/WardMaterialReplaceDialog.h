#ifndef WARDMATERIALREPLACEDIALOG_H
#define WARDMATERIALREPLACEDIALOG_H

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
class CWardMaterialReplaceDialog : public CGuiDialog{
protected:
public:
	long			m_nTransactionID;
	int				m_nStorage_ID;
	long			m_nProduct_ID;
	long			m_nProductCategoryID;
	long			m_nProductClassID;

	CGuiGroupBox	m_wndReplaceInformation;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndOnHandLabel;
	CGuiNumberCtrl	m_wndOnHand;
	CGuiLabel		m_wndSupplementNameLabel;
	CGuiComboBox	m_wndSupplementName;
	CGuiLabel		m_wndSupplementOnhandLabel;
	CGuiNumberCtrl	m_wndSupplementOnhand;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	CString	m_szDrugName;
	long	m_nOnHand;
	CString	m_szSupplementNameKey;
	long	m_nSupplementOnhand;
	CString	m_szUom;
	long	m_nQuantity;
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnOnHandChange(); 
	//void			OnOnHandSetfocus(); 
	//void			OnOnHandKillfocus(); 
	int			OnOnHandCheckValue(); 
	void			OnSupplementNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplementNameSelendok(); 
	//void			OnSupplementNameSetfocus(); 
	//void			OnSupplementNameKillfocus(); 
	long			OnSupplementNameLoadData(); 
	//void			OnSupplementNameAddNew(); 
	//void			OnSupplementOnhandChange(); 
	//void			OnSupplementOnhandSetfocus(); 
	//void			OnSupplementOnhandKillfocus(); 
	int			OnSupplementOnhandCheckValue(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CWardMaterialReplaceDialog(CWnd *pParent);
	~CWardMaterialReplaceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddWardMaterialReplaceDialog(); 
	int OnEditWardMaterialReplaceDialog(); 
	int OnDeleteWardMaterialReplaceDialog(); 
	int OnSaveWardMaterialReplaceDialog(); 
	int OnCancelWardMaterialReplaceDialog(); 
	int OnWardMaterialReplaceDialogListLoadData(); 
};
#endif
