#ifndef SIGNATURESETUPDIALOG_H
#define SIGNATURESETUPDIALOG_H

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
class CSignatureSetupDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndUserLabel;
	CGuiComboBox	m_wndUser;
	CGuiLabel		m_wndSignIDLabel;
	CGuiTextCtrl	m_wndSignID;
	CGuiLabel		m_wndSignFileLabel;
	CGuiComboBox	m_wndSignFile;
	CGuiLabel		m_wndSignImage;
	CGuiLabel		m_wndSignFile2Label;
	CGuiComboBox	m_wndSignFile2;
	CGuiLabel		m_wndSignImage2;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szUserKey;
	CString	m_szSignID;
	CString	m_szSignFileKey;
	CString	m_szSignFile2Key;
	void			OnUserSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserSelendok(); 
	//void			OnUserSetfocus(); 
	//void			OnUserKillfocus(); 
	long			OnUserLoadData(); 
	//void			OnUserAddNew(); 
	//void			OnSignIDChange(); 
	//void			OnSignIDSetfocus(); 
	//void			OnSignIDKillfocus(); 
	int			OnSignIDCheckValue(); 
	void			OnSignFileSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSignFileSelendok(); 
	//void			OnSignFileSetfocus(); 
	//void			OnSignFileKillfocus(); 
	long			OnSignFileLoadData(); 
	//void			OnSignFileAddNew(); 
	void			OnSignFile2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSignFile2Selendok(); 
	//void			OnSignFile2Setfocus(); 
	//void			OnSignFile2Killfocus(); 
	long			OnSignFile2LoadData(); 
	//void			OnSignFile2AddNew(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CSignatureSetupDialog(CWnd *pParent);
	~CSignatureSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSignatureSetupDialog(); 
	int OnEditSignatureSetupDialog(); 
	int OnDeleteSignatureSetupDialog(); 
	int OnSaveSignatureSetupDialog(); 
	int OnCancelSignatureSetupDialog(); 
	int OnSignatureSetupDialogListLoadData(); 
};
#endif
