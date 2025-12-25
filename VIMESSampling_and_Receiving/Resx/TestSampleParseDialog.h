#ifndef TESTSAMPLEPARSEDIALOG_H
#define TESTSAMPLEPARSEDIALOG_H

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
class CTestSampleParseDialog : public CGuiDialog{
protected:
public:
	CGuiButton		m_wndBrowse;
	CGuiLabel		m_wndSampleLabel;
	CGuiTextCtrl	m_wndSample;
	CGuiLabel		m_wndBeginTransmissionLabel;
	CGuiTextCtrl	m_wndBeginTransmission;
	CGuiLabel		m_wndEndTransmissionLabel;
	CGuiTextCtrl	m_wndEndTransmission;
	CGuiLabel		m_wndStartOfTextLabel;
	CGuiTextCtrl	m_wndStartOfText;
	CGuiLabel		m_wndEndOfTextLabel;
	CGuiTextCtrl	m_wndEndOfText;
	CGuiLabel		m_wndSeperatorLabel;
	CGuiTextCtrl	m_wndSeperator;
	CGuiLabel		m_wndLengthLabel;
	CGuiTextCtrl	m_wndLength;
	CGuiButton		m_wndParse;
	CGuiListCtrl	m_wndList;
	CString	m_szSample;
	CString	m_szBeginTransmission;
	CString	m_szEndTransmission;
	CString	m_szStartOfText;
	CString	m_szEndOfText;
	CString	m_szSeperator;
	CString	m_szLength;
	void			OnBrowseSelect(); 
	//void			OnSampleChange(); 
	//void			OnSampleSetfocus(); 
	//void			OnSampleKillfocus(); 
	int			OnSampleCheckValue(); 
	//void			OnBeginTransmissionChange(); 
	//void			OnBeginTransmissionSetfocus(); 
	//void			OnBeginTransmissionKillfocus(); 
	int			OnBeginTransmissionCheckValue(); 
	//void			OnEndTransmissionChange(); 
	//void			OnEndTransmissionSetfocus(); 
	//void			OnEndTransmissionKillfocus(); 
	int			OnEndTransmissionCheckValue(); 
	//void			OnStartOfTextChange(); 
	//void			OnStartOfTextSetfocus(); 
	//void			OnStartOfTextKillfocus(); 
	int			OnStartOfTextCheckValue(); 
	//void			OnEndOfTextChange(); 
	//void			OnEndOfTextSetfocus(); 
	//void			OnEndOfTextKillfocus(); 
	int			OnEndOfTextCheckValue(); 
	//void			OnSeperatorChange(); 
	//void			OnSeperatorSetfocus(); 
	//void			OnSeperatorKillfocus(); 
	int			OnSeperatorCheckValue(); 
	//void			OnLengthChange(); 
	//void			OnLengthSetfocus(); 
	//void			OnLengthKillfocus(); 
	int			OnLengthCheckValue(); 
	void			OnParseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CTestSampleParseDialog();
	~CTestSampleParseDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTestSampleParseDialog(); 
	int OnEditTestSampleParseDialog(); 
	int OnDeleteTestSampleParseDialog(); 
	int OnSaveTestSampleParseDialog(); 
	int OnCancelTestSampleParseDialog(); 
	int OnTestSampleParseDialogListLoadData(); 
};
#endif
