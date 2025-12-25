#ifndef HMSCAREINPUTHTMLDIALOG_H
#define HMSCAREINPUTHTMLDIALOG_H

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
#include "HTMLayoutCtrlEx.h"
/*
class CHTMLayoutCtrlEx : public CHTMLayoutCtrl{
public:
	CHTMLayoutCtrlEx(){};
	~CHTMLayoutCtrlEx(){};
	virtual BOOL on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason);
	double GetTongTruotNga();
	double GetNguyCoSuyDinhDuong();
	float GetBMI();
	void OnPrint(CDC *pDC, CPrintInfo* pInfo);
	void PrintPreview();
};
*/
class CHMSCareInputHtmlDialog : public CGuiDialog{
protected:
	BOOL	m_bEditable;
public:
	BOOL	m_bFound;
	CString		m_szType;
	CString		m_szSubType;
	long		m_nDocumentNo;
	long		m_nOrderID;
	CString		m_szDeptID;
	int			m_nRefIndex;
	int			m_nRoomID;
	CHTMLayoutCtrlEx	m_wndHtml;
	long			m_nOptIdx;
	int			m_nTreatTime;
	int			m_nMode;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiButton		m_wndYLenhBs;
	CGuiButton		m_wndForm;
	CGuiButton		m_wndHistory;
	CString	m_szOrderDate;
	int				m_nTreatIdx;
	BOOL			m_bIsCoppy;
	long			m_nOldTreatIdx;

	CDbfMap			m_hms_careinfoTbl;
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnYLenhBsSelect(); 
	void			OnFormSelect(); 
	void			OnHistorySelect();
	void			OnAddSelect();
	CHMSCareInputHtmlDialog(CWnd *pParent, CString szType,  int nMode , BOOL bEditable=FALSE, CString szSubType=_T("") );
	~CHMSCareInputHtmlDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCareInputHtmlDialog(); 
	int OnEditHMSCareInputHtmlDialog(); 
	int OnDeleteHMSCareInputHtmlDialog(); 
	int OnSaveHMSCareInputHtmlDialog(); 
	int OnCancelHMSCareInputHtmlDialog(); 
	int OnHMSCareInputHtmlDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void LoadSurgeryInfo(long nDocNo, int nIDx, long nOrderID);
	void LoadBasicInfo();
	void LoadDiagnostic();
	void LoadDeptRoomBed();
	void LoadOperation_C6(long nTreat_id);
	void LoadExtraInfo();
};
#endif
