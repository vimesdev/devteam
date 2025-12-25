#ifndef HeathExamDialog_H
#define HeathExamDialog_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHeathExamDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndInsertionPageLabel;
	CGuiNumberCtrl	m_wndInsertionPage;
	CGuiLabel		m_wndExamTypeLabel;
	CGuiComboBox	m_wndExamType;
	CGuiGroupBox	m_wndHealthExam;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	int	m_szInsertionPage;
	CString	m_szExamTypeKey;
	CString	m_szRankKey;
	CString	m_szNote;
	CDbfMap	m_hms_HeathExamDialogTbl; 
	//void			OnInsertionPageChange(); 
	//void			OnInsertionPageSetfocus(); 
	//void			OnInsertionPageKillfocus(); 
	int			OnInsertionPageCheckValue(); 
	void			OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExamTypeSelendok(); 
	//void			OnExamTypeSetfocus(); 
	//void			OnExamTypeKillfocus(); 
	long			OnExamTypeLoadData(); 
	void			OnExamTypeAddNew(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	void			OnRankAddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHeathExamDialog(CWnd *pParent);
	~CHeathExamDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHeathExamDialog(); 
	int OnEditHeathExamDialog(); 
	int OnDeleteHeathExamDialog(); 
	int OnSaveHeathExamDialog(); 
	int OnCancelHeathExamDialog(); 
	int OnHeathExamDialogListLoadData(); 
	long m_nPatientNo, m_nDocNo, m_nID;
};
#endif
