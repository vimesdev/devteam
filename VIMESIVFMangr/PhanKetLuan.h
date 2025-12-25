#ifndef PHANKETLUAN_H
#define PHANKETLUAN_H

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
class CPhanKetLuan : public CGuiView{
protected:
	long			m_nDocumentNo;
	CString			m_szRecordNo;
	int             m_nHtrIdx;
	int				m_nTreatTime;
	int             m_nCancerTime;
	CString			m_szType;
public:
	CGuiLabel		m_wndbenhanLabel;
	CGuiTextCtrl	m_wndbenhan;
	CGuiLabel		m_wndchandoanLabel;
	CGuiLabel		m_wndcdsbLabel;
	CGuiTextCtrl	m_wndcdsb;
	CGuiLabel		m_wndcdpbLabel;
	CGuiTextCtrl	m_wndcdpb;
	CGuiLabel		m_wndcdxdLabel;
	CGuiTextCtrl	m_wndcdxd;
	CGuiLabel		m_wndkhxnLabel;
	CGuiTextCtrl	m_wndkhxn;
	CGuiLabel		m_wndkhdtLabel;
	CGuiTextCtrl	m_wndkhdt;
	CGuiLabel		m_wndtluongLabel;
	CGuiTextCtrl	m_wndtluong;
	CString	m_szbenhan;
	CString	m_szcdsb;
	CString	m_szcdpb;
	CString	m_szcdxd;
	CString	m_szkhxn;
	CString	m_szkhdt;
	CString	m_sztluong;
	//void			OnbenhanChange(); 
	//void			OnbenhanSetfocus(); 
	//void			OnbenhanKillfocus(); 
	int			OnbenhanCheckValue(); 
	//void			OncdsbChange(); 
	//void			OncdsbSetfocus(); 
	//void			OncdsbKillfocus(); 
	int			OncdsbCheckValue(); 
	//void			OncdpbChange(); 
	//void			OncdpbSetfocus(); 
	//void			OncdpbKillfocus(); 
	int			OncdpbCheckValue(); 
	//void			OncdxdChange(); 
	//void			OncdxdSetfocus(); 
	//void			OncdxdKillfocus(); 
	int			OncdxdCheckValue(); 
	//void			OnkhxnChange(); 
	//void			OnkhxnSetfocus(); 
	//void			OnkhxnKillfocus(); 
	int			OnkhxnCheckValue(); 
	//void			OnkhdtChange(); 
	//void			OnkhdtSetfocus(); 
	//void			OnkhdtKillfocus(); 
	int			OnkhdtCheckValue(); 
	//void			OntluongChange(); 
	//void			OntluongSetfocus(); 
	//void			OntluongKillfocus(); 
	int			OntluongCheckValue(); 
	//CPhanKetLuan();
	CPhanKetLuan();
	~CPhanKetLuan();
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
	int OnAddPhanKetLuan(); 
	int OnEditPhanKetLuan(); 
	int OnDeletePhanKetLuan(); 
	int OnSavePhanKetLuan(); 
	int OnCancelPhanKetLuan(); 
	int OnPhanKetLuanListLoadData(); 
	void Refresh(int nTreatTime);

};
#endif
