#ifndef HMSAPPOINTMENTREEXAMINATION_H
#define HMSAPPOINTMENTREEXAMINATION_H

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
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#include "GuiView.h"
#include "DbField.h"
#include "GuiDialog.h"

class CHMSAppointmentReexamination : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndAppointmentReexamination;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szDate;
	CString	m_szToDate;
	CString	m_szNote;

	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_reexamTbl;

	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSAppointmentReexamination();
	~CHMSAppointmentReexamination();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAppointmentReexamination(); 
	int OnEditHMSAppointmentReexamination(); 
	int OnDeleteHMSAppointmentReexamination(); 
	int OnSaveHMSAppointmentReexamination(); 
	int OnCancelHMSAppointmentReexamination(); 
	int OnHMSAppointmentReexaminationListLoadData(); 
};


class CHMSAppointmentClinicalDialog: public CGuiDialog
{
public:
	CHMSAppointmentReexamination	m_wndAppointment;

	CHMSAppointmentClinicalDialog(CWnd *pParent);
	~CHMSAppointmentClinicalDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();

};

#endif
