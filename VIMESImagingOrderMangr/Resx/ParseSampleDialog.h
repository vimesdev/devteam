#ifndef PARSESAMPLEDIALOG_H
#define PARSESAMPLEDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CParseSampleDialog : public CGuiDialog{
protected:
public:
	CGuiButton		m_wndBrowse;
	CGuiLabel		m_wndSampleLabel;
	CGuiTextCtrl	m_wndSample;
	CGuiButton		m_wndParse;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndProtocolLabel;
	CGuiComboBox	m_wndProtocol;
	CString	m_szSample;
	CString	m_szProtocolKey;
	void			OnBrowseSelect(); 
	//void			OnSampleChange(); 
	//void			OnSampleSetfocus(); 
	//void			OnSampleKillfocus(); 
	int			OnSampleCheckValue(); 
	void			OnParseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnProtocolSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProtocolSelendok(); 
	//void			OnProtocolSetfocus(); 
	//void			OnProtocolKillfocus(); 
	long			OnProtocolLoadData(); 
	void			OnProtocolAddNew(); 
	CParseSampleDialog();
	~CParseSampleDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddParseSampleDialog(); 
	int OnEditParseSampleDialog(); 
	int OnDeleteParseSampleDialog(); 
	int OnSaveParseSampleDialog(); 
	int OnCancelParseSampleDialog(); 
	int OnParseSampleDialogListLoadData(); 
};
#endif
