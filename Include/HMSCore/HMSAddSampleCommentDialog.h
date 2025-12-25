#ifndef HMSADDSAMPLECOMMENTDIALOG_H
#define HMSADDSAMPLECOMMENTDIALOG_H

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
class AFX_EXT_CLASS CHMSAddSampleCommentDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndChildItemListlabel;
	CGuiLabel		m_wndItem;
	CGuiTextCtrl	m_wndItemDesc;
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndSampleLabel;
	CGuiComboBox	m_wndSampleName;
	CGuiButton		m_wndOk;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndChildItemList;
	CGuiGroupBox	m_wndThongtin_nhiemkhuan;
	CGuiLabel		m_wndPhanloainhiemkhuanlabel;
	CGuiComboBox	m_wndPhanloainhiemkhuan;
	CGuiTextCtrl	m_wndChitietnhiemkhuan;
	CString m_szGroup;
	CString	m_szSampleNameKey;
	CString	m_szNote;
	CString	m_szItems;
	CString	m_szItemDesc;
	CString	m_szPhanloainhiemkhuanKey;
	CString	m_szChitietnhiemkhuan;
	void			OnSampleNameSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnSampleNameSelendok();
	//void			OnSampleNameSetfocus(); 
	//void			OnSampleNameKillfocus(); 
	long			OnSampleNameLoadData();
	//void			OnSampleNameAddNew(); 
	void			OnOkSelect();
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue();
	int			OnItemDescCheckValue();
	CHMSAddSampleCommentDialog(CWnd* pParent);

	~CHMSAddSampleCommentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	long			OnChildItemListLoadData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSAddSampleCommentDialog();
	int OnEditCHMSAddSampleCommentDialog();
	int OnDeleteCHMSAddSampleCommentDialog();
	int OnSaveCHMSAddSampleCommentDialog();
	int OnCancelCHMSAddSampleCommentDialog();
	int OnCHMSAddSampleCommentDialogListLoadData();
	void			OnPhanloainhiemkhuanSelendok();
	long			OnPhanloainhiemkhuanLoadData();
	int			OnChitietnhiemkhuanCheckValue();
};
#endif