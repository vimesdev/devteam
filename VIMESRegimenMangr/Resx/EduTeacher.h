#ifndef EDUTEACHER_H
#define EDUTEACHER_H

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
#include "GuiView.h"
#include "DbField.h"
class CEduTeacher : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInformationGroup;
	CGuiLabel		m_wndTeacheridLabel;
	CGuiTextCtrl	m_wndTeacherid;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndBirtDateLabel;
	CGuiDateCtrl	m_wndBirtDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndCardIDLabel;
	CGuiTextCtrl	m_wndCardID;
	CGuiLabel		m_wndTechNiqueLabel;
	CGuiTextCtrl	m_wndTechNique;
	CGuiLabel		m_wndCertificateLabel;
	CGuiTextCtrl	m_wndCertificate;
	CGuiLabel		m_wndWorkUnitLabel;
	CGuiTextCtrl	m_wndWorkUnit;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndcontrol_25;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CString	m_szTeacherid;
	CString	m_szName;
	CString	m_szBirtDate;
	CString	m_szSexKey;
	CString	m_szAddress;
	CString	m_szPositionKey;
	CString	m_szPhone;
	CString	m_szCardID;
	CString	m_szTechNique;
	CString	m_szCertificate;
	CString	m_szWorkUnit;
	CString	m_szNote;
	CString	m_szSearchName;
	CDbfMap	m_edu_teacherTbl;
	//void			OnTeacheridChange(); 
	//void			OnTeacheridSetfocus(); 
	//void			OnTeacheridKillfocus(); 
	int			OnTeacheridCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnBirtDateChange(); 
	//void			OnBirtDateSetfocus(); 
	//void			OnBirtDateKillfocus(); 
	int			OnBirtDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnCardIDChange(); 
	//void			OnCardIDSetfocus(); 
	//void			OnCardIDKillfocus(); 
	int			OnCardIDCheckValue(); 
	//void			OnTechNiqueChange(); 
	//void			OnTechNiqueSetfocus(); 
	//void			OnTechNiqueKillfocus(); 
	int			OnTechNiqueCheckValue(); 
	//void			OnCertificateChange(); 
	//void			OnCertificateSetfocus(); 
	//void			OnCertificateKillfocus(); 
	int			OnCertificateCheckValue(); 
	//void			OnWorkUnitChange(); 
	//void			OnWorkUnitSetfocus(); 
	//void			OnWorkUnitKillfocus(); 
	int			OnWorkUnitCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	long			Oncontrol_25LoadData(); 
	void			Oncontrol_25SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_25DblClick(); 
	int			Oncontrol_25DeleteItem(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	CEduTeacher();
	~CEduTeacher();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEduTeacher(); 
	int OnEditEduTeacher(); 
	int OnDeleteEduTeacher(); 
	int OnSaveEduTeacher(); 
	int OnCancelEduTeacher(); 
	int OnEduTeacherListLoadData(); 
};
#endif
