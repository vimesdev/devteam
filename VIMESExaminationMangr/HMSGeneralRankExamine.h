#ifndef HMSGENERALRANKEXAMINE_H
#define HMSGENERALRANKEXAMINE_H

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
//	Ban quyen cua Cong ` Co Phan Phan Mem Y Te Viet Nam 2005-2012.
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
#include "HTMLayoutCtrlEx.h"

class CHMSGeneralRankExamine : public CGuiDialog{
protected:
public:
	long			m_nDocumentNo;
	bool			m_bPrinting;
	bool			m_bGeneralExamHealth;
	CString			m_szFileName;
	CString			m_szFilePath;
	CString			m_szType;
	CDbfMap	m_hms_examTbl;
	CMap<int, int, CString, CString> m_arDoctors;

	CHTMLayoutCtrlEx	m_wndLayout;
	CGuiButton		m_wndPrehistory;
	CGuiButton		m_wndReloadInfo;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	
	CGuiButton		m_wndENTExam;
	CGuiButton		m_wndOMFExam;
	CGuiButton		m_wndEYEExam; 
	CGuiButton		m_wndSPECExam; 
	CString m_szBoNhiem;
	void			OnReloadInfoSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnENTExamSelect(); 
	void			OnOMFExamSelect(); 
	void			OnEYEExamSelect(); 
	void			OnSPECExamSelect(); 
	CHMSGeneralRankExamine(CWnd *pParent);
	~CHMSGeneralRankExamine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSGeneralRankExamine(); 
	int OnEditHMSGeneralRankExamine(); 
	int OnDeleteHMSGeneralRankExamine(); 
	int OnSaveHMSGeneralRankExamine(); 
	int OnCancelHMSGeneralRankExamine(); 
	int OnHMSGeneralRankExamineListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
