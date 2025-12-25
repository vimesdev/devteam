#ifndef BH_KIEMTRATHONGTINKHAMBH_H
#define BH_KIEMTRATHONGTINKHAMBH_H

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
class Cbh_Kiemtrathongtinkham_BH : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupBoxPatientList;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndOK;
	CGuiLabel		m_wndTongSoLabel;
	CGuiNumberCtrl	m_wndTongSo;
	CGuiLabel		m_wndTrangThaiLabel;
	CGuiTextCtrl	m_wndTrangThai;
	CGuiLabel		m_wndFromName;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndHospitalNameLabel;
	CGuiTextCtrl	m_wndHospitalName;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDianostic;
	CGuiLabel		m_wndICDLabel;
	CGuiTextCtrl	m_wndICD;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndHospitalIDLabel;
	CGuiTextCtrl	m_wndHospitalID;
	CGuiButton		m_wndPrint;
	long	m_nTongSo;
	CString	m_szTrangThai;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szCardNo;
	CString	m_szAddress;
	CString	m_szHospitalName;
	CString	m_szDianostic;
	CString	m_szICD;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szHospitalID;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnOKSelect(); 
	//void			OnTongSoChange(); 
	//void			OnTongSoSetfocus(); 
	//void			OnTongSoKillfocus(); 
	int			OnTongSoCheckValue(); 
	//void			OnTrangThaiChange(); 
	//void			OnTrangThaiSetfocus(); 
	//void			OnTrangThaiKillfocus(); 
	int			OnTrangThaiCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnHospitalNameChange(); 
	//void			OnHospitalNameSetfocus(); 
	//void			OnHospitalNameKillfocus(); 
	int			OnHospitalNameCheckValue(); 
	//void			OnDianosticChange(); 
	//void			OnDianosticSetfocus(); 
	//void			OnDianosticKillfocus(); 
	int			OnDianosticCheckValue(); 
	//void			OnICDChange(); 
	//void			OnICDSetfocus(); 
	//void			OnICDKillfocus(); 
	int			OnICDCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnHospitalIDChange(); 
	//void			OnHospitalIDSetfocus(); 
	//void			OnHospitalIDKillfocus(); 
	int			OnHospitalIDCheckValue(); 
	void			OnPrintSelect(); 
	Cbh_Kiemtrathongtinkham_BH(CWnd *pParent);
	~Cbh_Kiemtrathongtinkham_BH();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddbh_Kiemtrathongtinkham(); 
	int OnEditbh_Kiemtrathongtinkham(); 
	int OnDeletebh_Kiemtrathongtinkham(); 
	int OnSavebh_Kiemtrathongtinkham(); 
	int OnCancelbh_Kiemtrathongtinkham(); 
	int Onbh_KiemtrathongtinkhamListLoadData(); 
};
#endif
