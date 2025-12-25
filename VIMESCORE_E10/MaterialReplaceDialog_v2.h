#ifndef MATERIALREPLACEDIALOG_V2_H
#define MATERIALREPLACEDIALOG_V2_H

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
class CMaterialReplaceDialog_v2 : public CGuiDialog{
protected:
	long			m_nTransactionID;
	long			m_nLine;
	long			m_nProductItem_ID;
	long			m_nProductCategoryID;
	long			m_nStorage_ID;
	long			m_nProductID;
	void			DebitwPatient();
public:
	CGuiLabel		m_wndOriginNameLabel;
	CGuiTextCtrl	m_wndOriginalName;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiGroupBox	m_wndMaterialList;
	CGuiGroupBox	m_wndReplaceInformation;
	CGuiNumberCtrl	m_wndQtyOrder;
	CGuiLabel		m_wndReplaceName1Label;
	CGuiComboBox	m_wndReplaceName1;
	CGuiLabel		m_wndQtyReplace1Label;
	CGuiNumberCtrl	m_wndQtyReplace1;
	CGuiLabel		m_wndReplaceName2Label;
	CGuiComboBox	m_wndReplaceName2;
	CGuiLabel		m_wndQtyReplace2Label;
	CGuiNumberCtrl	m_wndQtyReplace2;
	CGuiLabel		m_wndQtyDebitLabel;
	CGuiNumberCtrl	m_wndQtyDebit;
	CGuiButton		m_wndClear;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDebitwoPatientLabel;
	CGuiNumberCtrl	m_wndDebitwoPatient;
	CGuiNumberCtrl	m_wndDebitwoPatientRemain;
	CGuiLabel		m_wndDebitwPatientLabel;
	CGuiNumberCtrl	m_wndDebitwPatient;
	CString	m_szOriginalName;
	long	m_nQtyOrder;
	CString	m_szReplaceName1Key;
	long	m_nQtyReplace1;
	CString	m_szReplaceName2Key;
	long	m_nQtyReplace2;
	long	m_nQtyDebit;
	long	m_nDebitwoPatient;
	long	m_nDebitwPatient;
	long	m_nDebitwoPatientRemain;
	//void			OnOriginalNameChange(); 
	//void			OnOriginalNameSetfocus(); 
	//void			OnOriginalNameKillfocus(); 
	int			OnOriginalNameCheckValue(); 
	//void			OnQtyOrderChange(); 
	//void			OnQtyOrderSetfocus(); 
	//void			OnQtyOrderKillfocus(); 
	int			OnQtyOrderCheckValue(); 
	void			OnReplaceName1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReplaceName1Selendok(); 
	//void			OnReplaceName1Setfocus(); 
	//void			OnReplaceName1Killfocus(); 
	long			OnReplaceName1LoadData(); 
	//void			OnReplaceName1AddNew(); 
	//void			OnQtyReplace1Change(); 
	//void			OnQtyReplace1Setfocus(); 
	//void			OnQtyReplace1Killfocus(); 
	int			OnQtyReplace1CheckValue(); 
	void			OnReplaceName2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReplaceName2Selendok(); 
	//void			OnReplaceName2Setfocus(); 
	//void			OnReplaceName2Killfocus(); 
	long			OnReplaceName2LoadData(); 
	//void			OnReplaceName2AddNew(); 
	//void			OnQtyReplace2Change(); 
	//void			OnQtyReplace2Setfocus(); 
	//void			OnQtyReplace2Killfocus(); 
	int			OnQtyReplace2CheckValue(); 
	//void			OnQtyDebitChange(); 
	//void			OnQtyDebitSetfocus(); 
	//void			OnQtyDebitKillfocus(); 
	int			OnQtyDebitCheckValue(); 
	void			OnClearSelect(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListCheckAll();
	//void			OnDebitwoPatientChange(); 
	//void			OnDebitwoPatientSetfocus(); 
	//void			OnDebitwoPatientKillfocus(); 
	int			OnDebitwoPatientCheckValue(); 
	//void			OnDebitwPatientChange(); 
	//void			OnDebitwPatientSetfocus(); 
	//void			OnDebitwPatientKillfocus(); 
	int			OnDebitwPatientCheckValue(); 
	CMaterialReplaceDialog_v2(CWnd *pParent, long nOrderId, long nLineId);
	~CMaterialReplaceDialog_v2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMaterialReplaceDialog_v2(); 
	int OnEditMaterialReplaceDialog_v2(); 
	int OnDeleteMaterialReplaceDialog_v2(); 
	int OnSaveMaterialReplaceDialog_v2(); 
	int OnCancelMaterialReplaceDialog_v2(); 
	int OnMaterialReplaceDialog_v2ListLoadData(); 
	BOOL PreTranslateMessage(MSG* pMsg);
	void ShowCheckedQty();
};
#endif
