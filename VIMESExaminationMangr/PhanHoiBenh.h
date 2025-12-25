#ifndef PHANHOIBENH_H
#define PHANHOIBENH_H

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
class CPhanHoiBenh : public CGuiView{
protected:
	long			m_nDocumentNo;
	CString			m_szRecordNo;
public:
	CGuiLabel		m_wndvaolucLabel;
	CGuiDateTimeCtrl	m_wndvaoluc;
	CGuiLabel		m_wndvaongayLabel;
	CGuiNumberCtrl	m_wndvaongay;
	CGuiLabel		m_wndvaongay2Label;
	CGuiLabel		m_wndlidoLabel;
	CGuiTextCtrl	m_wndlido;
	CGuiLabel		m_wndbenhsuLabel;
	CGuiTextCtrl	m_wndbenhsu;
	CGuiLabel		m_wndtiensuLabel;
	CGuiLabel		m_wndbtLabel;
	CGuiTextCtrl	m_wndbthan;
	CGuiLabel		m_wndgdLabel;
	CGuiTextCtrl	m_wndgdinh;
	CString	m_szvaoluc;
	long	m_nvaongay;
	CString	m_szlido;
	CString	m_szbenhsu;
	CString	m_szbthan;
	CString	m_szgdinh;
	//void			OnvaolucChange(); 
	//void			OnvaolucSetfocus(); 
	//void			OnvaolucKillfocus(); 
	int			OnvaolucCheckValue(); 
	//void			OnvaongayChange(); 
	//void			OnvaongaySetfocus(); 
	//void			OnvaongayKillfocus(); 
	int			OnvaongayCheckValue(); 
	//void			OnlidoChange(); 
	//void			OnlidoSetfocus(); 
	//void			OnlidoKillfocus(); 
	int			OnlidoCheckValue(); 
	//void			OnbenhsuChange(); 
	//void			OnbenhsuSetfocus(); 
	//void			OnbenhsuKillfocus(); 
	int			OnbenhsuCheckValue(); 
	//void			OnbthanChange(); 
	//void			OnbthanSetfocus(); 
	//void			OnbthanKillfocus(); 
	int			OnbthanCheckValue(); 
	//void			OngdinhChange(); 
	//void			OngdinhSetfocus(); 
	//void			OngdinhKillfocus(); 
	int			OngdinhCheckValue(); 
	//CPhanHoiBenh();
	CPhanHoiBenh(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo);
	~CPhanHoiBenh();
	//void Init(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo);
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhanHoiBenh(); 
	int OnEditPhanHoiBenh(); 
	int OnDeletePhanHoiBenh(); 
	int OnSavePhanHoiBenh(); 
	int OnCancelPhanHoiBenh(); 
	int OnPhanHoiBenhListLoadData(); 
};
#endif
