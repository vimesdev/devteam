#ifndef ATMDOCATTACHMENT_H
#define ATMDOCATTACHMENT_H

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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CATMDocAttachment : public CGuiView{
protected:
	CString			m_szFileTitle;
	CString			m_szFilePath;
	CDbfMap			m_tblHms_doc_attachment;
public:
	long			m_nDocNo;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiButton		m_wndAdd;
	CGuiPictureCtrl	m_wndImage;
	CGuiLabel		m_wndFileNameLabel;
	CGuiTextCtrl	m_wndFileName;
	CGuiListCtrl	m_wndList;
	CString	m_szTypeKey;
	CString	m_szFileName;
	void			OnFindSelect(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnAddSelect(); 
	long			OnImageLoadData(); 
	void			OnImageSelectChange(int nOldItem, int nNewItem); 
	void			OnImageDblClick(); 
	int			OnImageDeleteItem(); 
	//void			OnFileNameChange(); 
	//void			OnFileNameSetfocus(); 
	//void			OnFileNameKillfocus(); 
	int			OnFileNameCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CATMDocAttachment();
	~CATMDocAttachment();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddATMDocAttachment(); 
	int OnEditATMDocAttachment(); 
	int OnDeleteATMDocAttachment(); 
	int OnSaveATMDocAttachment(); 
	int OnCancelATMDocAttachment(); 
	int OnATMDocAttachmentListLoadData(); 
};
#endif
