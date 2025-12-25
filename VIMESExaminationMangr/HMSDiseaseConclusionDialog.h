#ifndef HMSDISEASECONCLUSIONDIALOG_H
#define HMSDISEASECONCLUSIONDIALOG_H

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
class CHMSDiseaseConclusionDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndConclusionInfo;
	CGuiLabel		m_wndHealthRankLabel;
	CGuiTextCtrl	m_wndHealthRank;
	CGuiLabel		m_wndTrackingDiseaseLabel;
	CGuiTextCtrl	m_wndTrackingDisease;
	CGuiLabel		m_wndOtherIssueLabel;
	CGuiTextCtrl	m_wndOtherIssue;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szHealthRank;
	CString	m_szTrackingDisease;
	CString	m_szOtherIssue;

	long m_nDocNo;
	long m_nIdx;

	bool m_bIsTerminated;

	//void			OnHealthRankChange(); 
	//void			OnHealthRankSetfocus(); 
	//void			OnHealthRankKillfocus(); 
	int			OnHealthRankCheckValue(); 
	//void			OnTrackingDiseaseChange(); 
	//void			OnTrackingDiseaseSetfocus(); 
	//void			OnTrackingDiseaseKillfocus(); 
	int			OnTrackingDiseaseCheckValue(); 
	//void			OnOtherIssueChange(); 
	//void			OnOtherIssueSetfocus(); 
	//void			OnOtherIssueKillfocus(); 
	int			OnOtherIssueCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSDiseaseConclusionDialog(CWnd *pParent);
	~CHMSDiseaseConclusionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDiseaseConclusionDialog(); 
	int OnEditHMSDiseaseConclusionDialog(); 
	int OnDeleteHMSDiseaseConclusionDialog(); 
	int OnSaveHMSDiseaseConclusionDialog(); 
	int OnCancelHMSDiseaseConclusionDialog(); 
	int OnHMSDiseaseConclusionDialogListLoadData(); 
};
#endif
