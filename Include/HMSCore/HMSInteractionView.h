#ifndef HMSINTERACTIONVIEW_H
#define HMSINTERACTIONVIEW_H

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
class AFX_EXT_CLASS CHMSInteractionView : public CGuiDialog{
protected:
	struct sLine{
		CString szPair;
		CString szInfo;
		CString szType;
		CString	szOrder_id;
		CString	szProduct_id1;
		CString	szProduct_id2;
	};
	struct sLog{
		int		nOrder_id;
		long	nProduct_id1;
		long	nProduct_id2;
	};
	CString m_szIds;
	long m_nProduct_id;
	CArray<sLog, sLog> m_arrLog;
	void	GetLog();
public:
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndTenbnLabel;
	CGuiTextCtrl	m_wndTenbn;
	CGuiLabel		m_wndNgaykeLabel;
	CGuiDateCtrl	m_wndNgayke;
	CGuiLabel		m_wndSotuongtacLabel;
	CGuiNumberCtrl	m_wndSotuongtac;
	CGuiListCtrl	m_wndList;
	CGuiTextCtrl	m_wndDiengiai;
	CGuiButton		m_wndProceed;
	CGuiButton		m_wndClose;
	long	m_nSohoso;
	CString	m_szTenbn;
	CString	m_szNgayke;
	long	m_nSotuongtac;
	CString	m_szDiengiai;
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	//void			OnTenbnChange(); 
	//void			OnTenbnSetfocus(); 
	//void			OnTenbnKillfocus(); 
	int			OnTenbnCheckValue(); 
	//void			OnNgaykeChange(); 
	//void			OnNgaykeSetfocus(); 
	//void			OnNgaykeKillfocus(); 
	int			OnNgaykeCheckValue(); 
	//void			OnSotuongtacChange(); 
	//void			OnSotuongtacSetfocus(); 
	//void			OnSotuongtacKillfocus(); 
	int			OnSotuongtacCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnDiengiaiChange(); 
	//void			OnDiengiaiSetfocus(); 
	//void			OnDiengiaiKillfocus(); 
	int			OnDiengiaiCheckValue(); 
	void			OnProceedSelect();
	void			OnCloseSelect(); 
	CHMSInteractionView(CWnd *pParent, long nDocNo, CString szIds, long nProduct_id=0);
	~CHMSInteractionView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInteractionView(); 
	int OnEditHMSInteractionView(); 
	int OnDeleteHMSInteractionView(); 
	int OnSaveHMSInteractionView(); 
	int OnCancelHMSInteractionView(); 
	int OnHMSInteractionViewListLoadData(); 
};
#endif
