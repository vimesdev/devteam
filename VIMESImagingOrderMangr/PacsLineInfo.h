#ifndef PACSLINEINFO_H
#define PACSLINEINFO_H

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
class CPacsLineInfo : public CGuiDialog {
protected:
public:
	long	m_nOrderLineID;
	CString	m_szItemName;
	CGuiGroupBox	m_wndPacsLineInfo;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndTechguyLabel;
	CGuiComboBox	m_wndTechguy;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndNhanLucLabel;
	CString	m_szCategoryKey;
	CString	m_szTechguyKey;
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel);
	void			OnCategorySelendok();
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData();
	//void			OnCategoryAddNew(); 
	void			OnTechguySelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTechguySelendok();
	//void			OnTechguySetfocus(); 
	//void			OnTechguyKillfocus(); 
	long			OnTechguyLoadData();
	//void			OnTechguyAddNew(); 
	void			OnSaveSelect();
	void			OnNhanLucLabelSelect();
	CPacsLineInfo(CWnd* pParent);
	~CPacsLineInfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void SetDefaultValues();
	void GetDataToScreen();
	int SetMode(int nMode);
};
#endif
