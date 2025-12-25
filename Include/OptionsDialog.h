#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

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

#include "GuiDialog.h"


class AFX_EXT_CLASS COptionsDialog : public CGuiDialog{
protected:
public:
	CMFCGridCtrl	m_wndList;
	CGuiButton		m_wndOk;
	CGuiButton		m_wndCancel;
	virtual long			OnListLoadData();
	virtual void			OnListSelectChange(int nOldItem, int nNewItem);
	virtual void			OnListDblClick();
	virtual int			OnListDeleteItem();
	virtual void			OnOk();
	virtual void			OnCancel(); 
	
	
	COptionsDialog(CWnd *pParent);
	~COptionsDialog();

	virtual void OnCreateComponents();
	virtual void OnInitializeComponents();
	virtual void OnSetWindowEvents();
	virtual void OnDoDataExchange(CDataExchange* pDX);
	virtual void UpdateJson(BOOL bSaveAndValidate);
	virtual void GetDataToScreen();
	virtual void GetScreenToData();
	virtual void SetDefaultValues();
	virtual int SetMode(int nMode);

};
#endif
