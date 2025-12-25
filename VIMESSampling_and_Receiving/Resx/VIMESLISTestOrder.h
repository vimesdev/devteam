#ifndef VIMESLISTESTORDER_H
#define VIMESLISTESTORDER_H

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
class CVIMESLISTestOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndSpecimemList;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndInsOIDLabel;
	CGuiTextCtrl	m_wndInsOID;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndPaymentStateLabel;
	CGuiTextCtrl	m_wndPaymentState;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	long	m_nDocumentNo;
	CString	m_szOrderNo;
	CString	m_szInsOID;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szAddress;
	CString	m_szDoctor;
	CString	m_szOrderDate;
	CString	m_szObject;
	CString	m_szPaymentState;
	CDbfMap	m_hms_pcorderTbl;
	long			OnSpecimemListLoadData(); 
	void			OnSpecimemListSelectChange(int nOldItem, int nNewItem); 
	void			OnSpecimemListDblClick(); 
	int			OnSpecimemListDeleteItem(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnInsOIDChange(); 
	//void			OnInsOIDSetfocus(); 
	//void			OnInsOIDKillfocus(); 
	int			OnInsOIDCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnPaymentStateChange(); 
	//void			OnPaymentStateSetfocus(); 
	//void			OnPaymentStateKillfocus(); 
	int			OnPaymentStateCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CVIMESLISTestOrder();
	~CVIMESLISTestOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESLISTestOrder(); 
	int OnEditVIMESLISTestOrder(); 
	int OnDeleteVIMESLISTestOrder(); 
	int OnSaveVIMESLISTestOrder(); 
	int OnCancelVIMESLISTestOrder(); 
	int OnVIMESLISTestOrderListLoadData(); 
};
#endif
