#ifndef HMSCANCERTREATDIAGITEMLN_H
#define HMSCANCERTREATDIAGITEMLN_H

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
class CHMSCancerTreatDiagItemLn : public CGuiDialog{
protected:
	CWnd*	m_pParent;
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndTenThuocLabel;
	CGuiComboBox	m_wndTenThuoc;
	CGuiLabel		m_wndSoLuongLabel;
	CGuiNumberCtrl	m_wndSoLuong;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndTenphacdoLabel;
	CGuiTextCtrl	m_wndTenphacdo;
	CGuiLabel		m_wndDonviLabel;
	CGuiTextCtrl	m_wndDonvi;
	CGuiLabel		m_wndSoluongPDLabel;
	CGuiNumberCtrl	m_wndSoluongPD;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szObjectKey;
	CString	m_szStorageKey;
	CString	m_szTenThuocKey;
	float	m_nSoLuong;
	long	m_nSoluongPD;
	CString	m_szContent;
	CString	m_szUom;
	CString	m_szUomID;
	CString	m_szTenphacdo;
	CString	m_szDonvi;
	CString	m_szDonviID;

	CDbfMap hms_cancer_treatdiagitem;
	CString m_szOrderID;
	CString m_szLine;
	CString m_szProductID;
	long	m_nSoLuongMoi;
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnTenThuocSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTenThuocSelendok(); 
	//void			OnTenThuocSetfocus(); 
	//void			OnTenThuocKillfocus(); 
	long			OnTenThuocLoadData(); 
	//void			OnTenThuocAddNew(); 
	//void			OnSoLuongChange(); 
	//void			OnSoLuongSetfocus(); 
	//void			OnSoLuongKillfocus(); 
	int			OnSoLuongCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnTenphacdoChange(); 
	//void			OnTenphacdoSetfocus(); 
	//void			OnTenphacdoKillfocus(); 
	int			OnTenphacdoCheckValue(); 
	//void			OnDonviChange(); 
	//void			OnDonviSetfocus(); 
	//void			OnDonviKillfocus(); 
	int			OnDonviCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSCancerTreatDiagItemLn(CWnd *pParent);
	~CHMSCancerTreatDiagItemLn();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerTreatDiagItemLn(); 
	int OnEditHMSCancerTreatDiagItemLn(); 
	int OnDeleteHMSCancerTreatDiagItemLn(); 
	int OnSaveHMSCancerTreatDiagItemLn(); 
	int OnCancelHMSCancerTreatDiagItemLn(); 
	int OnHMSCancerTreatDiagItemLnListLoadData(); 
};
#endif
