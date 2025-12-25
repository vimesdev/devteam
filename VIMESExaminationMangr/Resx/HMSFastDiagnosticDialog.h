#ifndef HMSFASTDIAGNOSTICDIALOG_H
#define HMSFASTDIAGNOSTICDIALOG_H

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
class CHMSFastDiagnosticDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndConclusionInformation;
	CGuiLabel		m_wndDiagnosticICDLabel;
	CGuiComboBox	m_wndDiagnosticICD;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndDiagnosticICDLabel;
	CGuiComboBox	m_wndDiagnosticICD2;
	CGuiLabel		m_wndDiagnosticICDLabel;
	CGuiComboBox	m_wndDiagnosticICD3;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndDiagnosticICD4Label;
	CGuiComboBox	m_wndDiagnosticICD4;
	CGuiLabel		m_wndDiagnosticICD5Label;
	CGuiComboBox	m_wndDiagnosticICD5;
	CString	m_szDiagnosticICDKey;
	CString	m_szConclusion;
	CString	m_szDiagnosticICD2Key;
	CString	m_szDiagnosticICD3Key;
	CString	m_szDiagnosticICD4Key;
	CString	m_szDiagnosticICD5Key;
	void			OnDiagnosticICDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosticICDSelendok(); 
	//void			OnDiagnosticICDSetfocus(); 
	//void			OnDiagnosticICDKillfocus(); 
	long			OnDiagnosticICDLoadData(); 
	//void			OnDiagnosticICDAddNew(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnDiagnosticICD2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosticICD2Selendok(); 
	//void			OnDiagnosticICD2Setfocus(); 
	//void			OnDiagnosticICD2Killfocus(); 
	long			OnDiagnosticICD2LoadData(); 
	//void			OnDiagnosticICD2AddNew(); 
	void			OnDiagnosticICD3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosticICD3Selendok(); 
	//void			OnDiagnosticICD3Setfocus(); 
	//void			OnDiagnosticICD3Killfocus(); 
	long			OnDiagnosticICD3LoadData(); 
	//void			OnDiagnosticICD3AddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnDiagnosticICD4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosticICD4Selendok(); 
	//void			OnDiagnosticICD4Setfocus(); 
	//void			OnDiagnosticICD4Killfocus(); 
	long			OnDiagnosticICD4LoadData(); 
	//void			OnDiagnosticICD4AddNew(); 
	void			OnDiagnosticICD5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosticICD5Selendok(); 
	//void			OnDiagnosticICD5Setfocus(); 
	//void			OnDiagnosticICD5Killfocus(); 
	long			OnDiagnosticICD5LoadData(); 
	//void			OnDiagnosticICD5AddNew(); 
	CHMSFastDiagnosticDialog(CWnd *pParent);
	~CHMSFastDiagnosticDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFastDiagnosticDialog(); 
	int OnEditHMSFastDiagnosticDialog(); 
	int OnDeleteHMSFastDiagnosticDialog(); 
	int OnSaveHMSFastDiagnosticDialog(); 
	int OnCancelHMSFastDiagnosticDialog(); 
	int OnHMSFastDiagnosticDialogListLoadData(); 
};
#endif
