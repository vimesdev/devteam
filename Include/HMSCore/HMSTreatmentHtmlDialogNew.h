#ifndef HMSTreatmentHtmlDialogNewNEW_H
#define HMSTreatmentHtmlDialogNewNEW_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright � Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
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

#include "HTMLayoutCtrlEx.h"
#include "GridListView.h"
#include "MFCReportCtrl.h"
#include "GuiView.h"


class AFX_EXT_CLASS CHMSTreatmentHtmlDialogNew : public CGuiDialog
{
protected:
public:

	CWnd* m_pView;
	CRect	m_rcView;
	CMap<LPCTSTR, LPCTSTR, CGuiView*, CGuiView*> m_mapViews;
	CString		m_szType;
	int			m_nListWidth;
	long		m_nOrderId;
	CString		m_szFormID;
	CString		m_szFormType;
	CString		m_szMultiSheet;
	CString		m_szTT32;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	int			m_nRefIndex;
	int			m_nRoomID;
	bool		m_bFound;
	long		m_nOptIdx;
	CString		m_szOptKey;
	float		m_scale;
	CString		m_szUID;
	bool		m_bSurgery;
	long		m_nID;
	CString		m_szFile;
	CString m_szHcrStatus;
	CString m_szHcrResult;

#if (_MSC_VER > 1500)
	CMFCReportCtrl	m_wndList;
#else
	CGridListView	m_wndList;
#endif

	CGridListView	m_wndDetail;
	CGuiLabel		m_wndOptLabel;
	CGuiComboBox	m_wndOpt;
	CHTMLayoutCtrlEx	m_wndHtml;
	
	
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSetting;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;

	int			OnSearchCheckValue(); 

	void			OnListSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnListSelendok(); 
	//void			OnListSetfocus(); 
	//void			OnListKillfocus(); 
	long			OnListLoadData();
	int			OnSearchChange(); 

	void			OnOptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOptSelendok(); 
	//void			OnOptSetfocus(); 
	//void			OnOptKillfocus(); 
	long			OnOptLoadData(); 

	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnSettingSelect();
	void			OnAddSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnExTaskSelect();
	CHMSTreatmentHtmlDialogNew(CWnd *pParent, CString szForm, int nMode);
	~CHMSTreatmentHtmlDialogNew();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentHtmlDialogNew(); 
	int OnEditHMSTreatmentHtmlDialogNew(); 
	int OnDeleteHMSTreatmentHtmlDialogNew(); 
	int OnSaveHMSTreatmentHtmlDialogNew(); 
	int OnCancelHMSTreatmentHtmlDialogNew(); 
	int OnHMSTreatmentHtmlDialogNewListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void LoadSurgeryInfo(long nDocNo, int nIDx, long nOrderID);
	void LoadBasicInfo();
	void LoadDiagnostic();
	void LoadDeptRoomBed();
	void LoadClinicalRecord();
	long LoadHtmlForms();
	void OnDeleteDrug();
	void		GenBarcode();

	void ShowOpt(BOOL bFlag);

	virtual CGuiView* CreateView(LPCTSTR szName);
	void	ShowView();
	void	HideView();
	void	SwitchWebView(bool bEnable);

	void LoadDuoInfo();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
	void	OnResizeLayout();
};
#endif
