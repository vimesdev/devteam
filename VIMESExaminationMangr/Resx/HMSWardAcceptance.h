#ifndef HMSWARDACCEPTANCE_H
#define HMSWARDACCEPTANCE_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSWardAcceptance : public CGuiView{
protected:
public:
	CGuiLabel		m_wndInDateLabel;
	CGuiDateTimeCtrl	m_wndInDate;
	CGuiLabel		m_wndFromWardLabel;
	CGuiComboBox	m_wndFromWard;
	CGuiLabel		m_wndExamineDiseaseLabel;
	CGuiComboBox	m_wndExamineDisease;
	CGuiLabel		m_wndDepartmentDiseaseLabel;
	CGuiComboBox	m_wndDepartmentDisease;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiComboBox	m_wndMainDisease;
	CGuiLabel		m_wndDiseaseAccompaniedLabel;
	CGuiComboBox	m_wndDiseaseAccompanied;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndInWardNoLabel;
	CGuiNumberCtrl	m_wndInWardNo;
	CGuiLabel		m_wndIntroducePlaceLabel;
	CGuiComboBox	m_wndIntroducePlace;
	CGuiLabel		m_wndTotalTimeLabel;
	CGuiNumberCtrl	m_wndTotalTime;
	CString	m_szInDate;
	CString	m_szFromWardKey;
	CString	m_szExamineDiseaseKey;
	CString	m_szDepartmentDiseaseKey;
	CString	m_szMainDiseaseKey;
	CString	m_szDiseaseAccompaniedKey;
	CString	m_szRelationDisease;
	CString	m_szReason;
	long	m_nInWardNo;
	CString	m_szIntroducePlaceKey;
	long	m_nTotalTime;
	//void			OnInDateChange(); 
	//void			OnInDateSetfocus(); 
	//void			OnInDateKillfocus(); 
	int			OnInDateCheckValue(); 
	void			OnFromWardSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromWardSelendok(); 
	//void			OnFromWardSetfocus(); 
	//void			OnFromWardKillfocus(); 
	long			OnFromWardLoadData(); 
	void			OnFromWardAddNew(); 
	void			OnExamineDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExamineDiseaseSelendok(); 
	//void			OnExamineDiseaseSetfocus(); 
	//void			OnExamineDiseaseKillfocus(); 
	long			OnExamineDiseaseLoadData(); 
	void			OnExamineDiseaseAddNew(); 
	void			OnDepartmentDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentDiseaseSelendok(); 
	//void			OnDepartmentDiseaseSetfocus(); 
	//void			OnDepartmentDiseaseKillfocus(); 
	long			OnDepartmentDiseaseLoadData(); 
	void			OnDepartmentDiseaseAddNew(); 
	void			OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMainDiseaseSelendok(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	long			OnMainDiseaseLoadData(); 
	void			OnMainDiseaseAddNew(); 
	void			OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiseaseAccompaniedSelendok(); 
	//void			OnDiseaseAccompaniedSetfocus(); 
	//void			OnDiseaseAccompaniedKillfocus(); 
	long			OnDiseaseAccompaniedLoadData(); 
	void			OnDiseaseAccompaniedAddNew(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	//void			OnInWardNoChange(); 
	//void			OnInWardNoSetfocus(); 
	//void			OnInWardNoKillfocus(); 
	int			OnInWardNoCheckValue(); 
	void			OnIntroducePlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIntroducePlaceSelendok(); 
	//void			OnIntroducePlaceSetfocus(); 
	//void			OnIntroducePlaceKillfocus(); 
	long			OnIntroducePlaceLoadData(); 
	void			OnIntroducePlaceAddNew(); 
	//void			OnTotalTimeChange(); 
	//void			OnTotalTimeSetfocus(); 
	//void			OnTotalTimeKillfocus(); 
	int			OnTotalTimeCheckValue(); 
	CHMSWardAcceptance();
	~CHMSWardAcceptance();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSWardAcceptance(); 
	int OnEditHMSWardAcceptance(); 
	int OnDeleteHMSWardAcceptance(); 
	int OnSaveHMSWardAcceptance(); 
	int OnCancelHMSWardAcceptance(); 
	int OnHMSWardAcceptanceListLoadData(); 
};
#endif
