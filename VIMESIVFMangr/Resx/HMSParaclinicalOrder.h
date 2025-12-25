#ifndef HMSPARACLINICALORDER_H
#define HMSPARACLINICALORDER_H

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
class CHMSParaclinicalOrder : public CGuiView{
protected:
public:
	void	LoadData();

	CGuiGroupBox	m_wndParaclinicalInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndResultDate;
	CGuiLabel		m_wndTreatDoctorLabel;
	CGuiTextCtrl	m_wndTreatDoctor;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiTextCtrl	m_wndPractitioner;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiListCtrl	m_wndTestList;
	CGuiLabel		m_wndRemarkLabel;
	CGuiTextCtrl	m_wndRemark;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndConclusionLabel;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndPrint;
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szResultDate;
	CString	m_szTreatDoctor;
	CString	m_szPractitioner;
	CString	m_szStatus;
	CString	m_szRemark;
	CString	m_szConclusion;
	CString	m_szResult;
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnResultDateChange(); 
	//void			OnResultDateSetfocus(); 
	//void			OnResultDateKillfocus(); 
	int			OnResultDateCheckValue(); 
	//void			OnTreatDoctorChange(); 
	//void			OnTreatDoctorSetfocus(); 
	//void			OnTreatDoctorKillfocus(); 
	int			OnTreatDoctorCheckValue(); 
	//void			OnPractitionerChange(); 
	//void			OnPractitionerSetfocus(); 
	//void			OnPractitionerKillfocus(); 
	int			OnPractitionerCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	//void			OnRemarkChange(); 
	//void			OnRemarkSetfocus(); 
	//void			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnConfirmSelect(); 
	void			OnPrintSelect(); 
	CHMSParaclinicalOrder();
	~CHMSParaclinicalOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalOrder(); 
	int OnEditHMSParaclinicalOrder(); 
	int OnDeleteHMSParaclinicalOrder(); 
	int OnSaveHMSParaclinicalOrder(); 
	int OnCancelHMSParaclinicalOrder(); 
	int OnHMSParaclinicalOrderListLoadData(); 
};
#endif
