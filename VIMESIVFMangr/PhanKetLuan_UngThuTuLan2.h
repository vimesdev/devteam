#ifndef PhanKetLuan_UngThuTuLan2_H
#define PhanKetLuan_UngThuTuLan2_H

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
class CPhanKetLuan_UngThuTuLan2 : public CGuiView{
protected:
	long			m_nDocumentNo;
	CString			m_szRecordNo;
	int             m_nHtrIdx;
	int		m_nTreatTime;
	int             m_nCancerTime;
	CString			m_szType;
public:
	CGuiLabel		m_wndkhambenhLabel;
	CGuiTextCtrl	m_wndkhambenh;
	CGuiLabel		m_wnddanhgiaketquaLabel;
	CGuiTextCtrl	m_wnddanhgiaketqua;
	CGuiLabel		m_wndchandoanLabel;
	CGuiTextCtrl	m_wndchandoan;
	CGuiLabel		m_wndkehoachdieutriLabel;
	CGuiLabel		m_wndcacxetnghiemLabel;
	CGuiTextCtrl	m_wndcacxetnghiem;
	CGuiLabel		m_wndhuongdieutriLabel;
	CGuiTextCtrl	m_wndhuongdieutri;
	CGuiLabel		m_wndtienluongLabel;
	CGuiTextCtrl	m_wndtienluong;
	CString	m_szkhambenh;
	CString	m_szdanhgiaketqua;
	CString	m_szchandoan;
	CString	m_szcacxetnghiem;
	CString	m_szhuongdieutri;
	CString	m_sztienluong;
	//void			OnkhambenhChange(); 
	//void			OnkhambenhSetfocus(); 
	//void			OnkhambenhKillfocus(); 
	int			OnkhambenhCheckValue(); 
	//void			OndanhgiaketquaChange(); 
	//void			OndanhgiaketquaSetfocus(); 
	//void			OndanhgiaketquaKillfocus(); 
	int			OndanhgiaketquaCheckValue(); 
	//void			OnchandoanChange(); 
	//void			OnchandoanSetfocus(); 
	//void			OnchandoanKillfocus(); 
	int			OnchandoanCheckValue(); 
	//void			OncacxetnghiemChange(); 
	//void			OncacxetnghiemSetfocus(); 
	//void			OncacxetnghiemKillfocus(); 
	int			OncacxetnghiemCheckValue(); 
	//void			OnhuongdieutriChange(); 
	//void			OnhuongdieutriSetfocus(); 
	//void			OnhuongdieutriKillfocus(); 
	int			OnhuongdieutriCheckValue(); 
	//void			OntienluongChange(); 
	//void			OntienluongSetfocus(); 
	//void			OntienluongKillfocus(); 
	int			OntienluongCheckValue(); 
	//CPhanKetLuan_UngThuTuLan2();
	CPhanKetLuan_UngThuTuLan2();
	~CPhanKetLuan_UngThuTuLan2();
	void Init(int nMode, long nDocNo, CString szRecordNo, int nHtrIdx, int nCancerTime, int nTreatTime);
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhanKetLuan_UngThuTuLan2(); 
	int OnEditPhanKetLuan_UngThuTuLan2(); 
	int OnDeletePhanKetLuan_UngThuTuLan2(); 
	int OnSavePhanKetLuan_UngThuTuLan2(); 
	int OnCancelPhanKetLuan_UngThuTuLan2(); 
	int OnPhanKetLuan_UngThuTuLan2ListLoadData(); 
	void Refresh(int nTreatTime);

};
#endif
