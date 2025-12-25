#ifndef FASOURCEVIEW_H
#define FASOURCEVIEW_H

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
class CFASourceView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFASOURCE;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiLabel		m_wndChapterLabel;
	CGuiComboBox	m_wndChapter;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndSubItemLabel;
	CGuiComboBox	m_wndSubItem;
	CString	m_szSourceKey;
	CString	m_szChapterKey;
	CString	m_szItemKey;
	CString	m_szSubItemKey;
	void			OnSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourceSelendok(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	long			OnSourceLoadData(); 
	//void			OnSourceAddNew(); 
	void			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChapterSelendok(); 
	//void			OnChapterSetfocus(); 
	//void			OnChapterKillfocus(); 
	long			OnChapterLoadData(); 
	//void			OnChapterAddNew(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	void			OnSubItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSubItemSelendok(); 
	//void			OnSubItemSetfocus(); 
	//void			OnSubItemKillfocus(); 
	long			OnSubItemLoadData(); 
	//void			OnSubItemAddNew(); 
	CFASourceView();
	~CFASourceView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFASourceView(); 
	int OnEditFASourceView(); 
	int OnDeleteFASourceView(); 
	int OnSaveFASourceView(); 
	int OnCancelFASourceView(); 
	int OnFASourceViewListLoadData(); 
};
#endif
