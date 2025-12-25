#ifndef HMSSIGNATUREVIEW_H
#define HMSSIGNATUREVIEW_H

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



class AFX_EXT_CLASS CHMSSignatureView : public CGuiView{
protected:
public:
	//m_nViewType: 0-> Dung cho bac si, 1-> Dung cho truong khoa, giam doc ky, 
	long	m_nDocumentNo;
	int		m_nViewType;

	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiCheckBox	m_wndSummaryShow;
	CGridListView	m_wndList;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndUnsign;
	CGuiRadioButton	m_wndSigned;
	CGuiRadioButton	m_wndFinish;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSetting;
	CGridListView	m_wndSummary;
	
	CString	m_szCategoryKey;
	CString	m_szSearch;
	BOOL	m_bSummaryShow;
	int	m_nSigned;

	void	SetViewType(int nType);

	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnSummaryShowSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnSummaryLoadData(); 
	void			OnSummarySelectChange(int nOldItem, int nNewItem); 
	void			OnSummaryDblClick(); 
	int			OnSummaryDeleteItem(); 
	void			OnAllSelect(); 
	void			OnUnsignSelect(); 
	void			OnSignedSelect();
	void			OnFinishSelect();
	void			OnAddSelect(); 
	void			OnSettingSelect();
	CHMSSignatureView();
	~CHMSSignatureView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSignatureView(); 
	int OnEditHMSSignatureView(); 
	int OnDeleteHMSSignatureView(); 
	int OnSaveHMSSignatureView(); 
	int OnCancelHMSSignatureView(); 
	int OnSettingHMSSignatureView(); 
	int Refresh(long nDocumentNo = 0); 
	int OnAddDocument();
	int OnDeleteDocument();
	int OnSendDocument();
	CString GetDocumentStatus(CString szSignatrueID);
	void OnResizeLayout();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
#endif
