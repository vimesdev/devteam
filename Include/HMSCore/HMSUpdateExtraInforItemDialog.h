#ifndef CHMSUPDATEEXTRAINFORDIALOG_H
#define CHMSUPDATEEXTRAINFORDIALOG_H

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
class CHMSUpdateExtraInforItemDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndDescGroupBox;
	CGuiGroupBox	m_wndChildItemListlabel;
	CGuiLabel		m_wndMucphiLabel;
	CGuiTextCtrl	m_wndMucphi;
	CGuiLabel		m_wndPhannhomLabel;
	CGuiComboBox	m_wndPacsGroup;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndChildItemList;
	CGuiLabel		m_wndAddChildItemLabel;
	CGuiComboBox	m_wndChildItem;
	CGuiLabel		m_wndNumberLabel;
	CGuiNumberCtrl	m_wndDefaultQty;
	CGuiLabel		m_wndCommentLabel;
	CGuiTextCtrl	m_wndComment;
	CGuiLabel		m_wndClassifyLabel;
	CGuiComboBox	m_wndClassify;
	CGuiLabel		m_wndExcludeObjLabel;
	CGuiComboBox	m_wndExcludeObj;
	CGuiCheckBox	m_wndnot_generate_number;
	CGuiCheckBox	m_wndemergency_room;

	CGuiLabel m_wndHenChieuLabel;
    CGuiNumberCtrl m_wndHenChieu;

	CGuiLabel		m_wndPerformZoneLabel;
	CGuiComboBox	m_wndPerformZone;
	CGuiLabel		m_wndNumberExLabel;
	CGuiNumberCtrl	m_wndNumberEx;

	CString	m_szID;
	CString	m_szMucphi;
	CString	m_szPacsGroupKey;
	CString	m_szChildItemKey;
	CString m_szClassifyKey;
	CString m_szExcludeObjKey;
	BOOL	m_bnot_generate_number;
	BOOL	m_bemergency_room;
    CString m_szPerformZoneKey;
    long	m_nNumberEx;

	long	m_nDefaultQty;
	float	m_nRatio;
	int		m_nRoomID;
	CString	m_szComment;
	CString m_szType;
	CString m_szDeptID;
	CString m_szExcludeObjs;

	long m_nHenChieuQty;
    int OnHenChieuCheckValue(); 

	int			OnDefaultQtyCheckValue();
	int			OnCommentCheckValue(); 
	//void			OnMucphiChange(); 
	//void			OnMucphiSetfocus(); 
	//void			OnMucphiKillfocus(); 
	int			OnMucphiCheckValue(); 
	void			OnPacsGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPacsGroupSelendok(); 
	//void			OnPacsGroupSetfocus(); 
	//void			OnPacsGroupKillfocus(); 
	long			OnPacsGroupLoadData(); 
	//void			OnPacsGroupAddNew(); 

	void			OnClassifySelectChange(int nOldItemSel, int nNewItemSel);
	void			OnClassifySelendok();
	//void			OnClassifySetfocus(); 
	//void			OnClassifyKillfocus(); 
	long			OnClassifyLoadData();
	//void			OnClassifyAddNew(); 

	void			OnExcludeObjSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnExcludeObjSelendok();
	//void			OnExcludeObjSetfocus(); 
	//void			OnExcludeObjKillfocus(); 
	long			OnExcludeObjLoadData();
	//void			OnExcludeObjAddNew(); 
	void			OnPerformZoneSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformZoneSelendok(); 
	//void			OnPerformZoneSetfocus(); 
	//void			OnPerformZoneKillfocus(); 
	long			OnPerformZoneLoadData(); 
	//void			OnPerformZoneAddNew(); 
	//void			OnNumberExChange(); 
	//void			OnNumberExSetfocus(); 
	//void			OnNumberExKillfocus(); 
	int			OnNumberExCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	long			OnChildItemListLoadData();
	long			OnChildItemLoadData();

	CHMSUpdateExtraInforItemDialog(CWnd *pParent);
	~CHMSUpdateExtraInforItemDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSUpdateExtraInforItemDialog(); 
	int OnEditCHMSUpdateExtraInforItemDialog(); 
	int OnDeleteCHMSUpdateExtraInforItemDialog(); 
	int OnSaveCHMSUpdateExtraInforItemDialog(); 
	int OnCancelCHMSUpdateExtraInforItemDialog(); 
	int OnCHMSUpdateExtraInforItemDialogListLoadData();
	void SetCheckData(CGuiComboBox* pCombo, CString szData);
	int	OnEditChildItemData();
	void			Onnot_generate_numberSelect();
	void			Onemergency_roomSelect();
};
#endif