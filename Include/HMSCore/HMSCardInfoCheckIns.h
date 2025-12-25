#ifndef HMSCARDINFOCHECKINS_H
#define HMSCARDINFOCHECKINS_H

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
#include "HTMLayoutCtrl.h"
#include "GridListView.h"
class AFX_EXT_CLASS CHMSCardInfoCheckIns : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndHistoryCheckIns;
	CGuiGroupBox	m_wndInformationCard;
	CHTMLayoutCtrl	m_wndListCardInfo;
	CGuiGroupBox	m_wndHistoreryCard;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndPrint;
	CGridListView	m_wndList;
	CGridListView	m_wndListHistory;
	CString			m_szCanhbao;
	CString			m_szNOI_DUNG;
	CString			m_szHO_TEN;
	CString			m_szNGAY_SINH;
	CString			m_szGIOI_TINH;
	CString			m_szDIA_CHI;
	CString			m_szMADKBD;
	CString			m_szTU_NGAY1;
	CString			m_szDEN_NGAY1;

	CString			m_szMA_KV;
	CString			m_szTHE_CU;
	CString			m_szTHE_MOI;
	CString			m_szTU_NGAY2;
	CString			m_szDEN_NGAY2;
	CString			m_szNgayDu5nam;
	JSONVALUE		m_json;
	JSONVALUE		m_jsonHisCheck;
	long			OnListCardInfoLoadData(); 
	void			OnListCardInfoSelectChange(int nOldItem, int nNewItem); 
	void			OnListCardInfoDblClick(); 
	int			OnListCardInfoDeleteItem(); 
	void			OnOKSelect();
	void			OnPrintSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	long			OnListHistoryLoadData(); 
	void			OnListHistorySelectChange(int nOldItem, int nNewItem); 
	void			OnListHistoryDblClick();
	CHMSCardInfoCheckIns(CWnd *pParent);
	~CHMSCardInfoCheckIns();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCardInfoCheckIns(); 
	int OnEditHMSCardInfoCheckIns(); 
	int OnDeleteHMSCardInfoCheckIns(); 
	int OnSaveHMSCardInfoCheckIns(); 
	int OnCancelHMSCardInfoCheckIns(); 
	int OnHMSCardInfoCheckInsListLoadData(); 
};
#endif
