#ifndef PATIENTINFO_H
#define PATIENTINFO_H

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
#include "GuiView.h"
#include "DbField.h"
class CPatientinfo : public CGuiView{
protected:
public:
	CGuiLabel		m_wndPatientNOLabel;
	CGuiNumberCtrl	m_wndPatientNO;
	CGuiLabel		m_wndPatientNamLabel;
	CGuiTextCtrl	m_wndPatientNam;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	long	m_nPatientNO;
	CString	m_szPatientNam;
	CString	m_szBirthDate;
	CString	m_szSex;
	CDbfMap	m_hms_patientTbl;
	//void			OnPatientNOChange(); 
	//void			OnPatientNOSetfocus(); 
	//void			OnPatientNOKillfocus(); 
	int			OnPatientNOCheckValue(); 
	//void			OnPatientNamChange(); 
	//void			OnPatientNamSetfocus(); 
	//void			OnPatientNamKillfocus(); 
	int			OnPatientNamCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	CPatientinfo();
	~CPatientinfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPatientinfo(); 
	int OnEditPatientinfo(); 
	int OnDeletePatientinfo(); 
	int OnSavePatientinfo(); 
	int OnCancelPatientinfo(); 
	int OnPatientinfoListLoadData(); 
};
#endif
