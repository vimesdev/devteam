#ifndef HMSBENHANHTMLDIALOG_H
#define HMSBENHANHTMLDIALOG_H

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
#include "HMSBenhAnMat1.h"
#include "PhanKhamChuyenKhoaHTML.h"
#include "HMSExmContractListView.h"

#define VM_SAVE			0x020
#define VM_PRINT		0x040
#define VM_REFRESH		0x080

class AFX_EXT_CLASS CHMSBenhAnHTMLDialog : public CGuiDialog{
protected:
public:
	CGuiTabCtrl	m_wndTab;
	CGuiButton		m_wndSetting;
    CGuiButton		m_wndTreatTime;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndInputForm;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintSub;
	CHMSBenhAnMat1*	m_wndMat1;
	CGuiView*			m_pChuyenkhoa;
	CPhanKhamChuyenKhoaHTML* m_wndChuyenKhoaHTML;
	CMap<int, int, CWnd*, CWnd*>	m_winForms;

	int		m_nTypeRecord;
	CString m_szRecordNo;
	long	m_nHtrIdx;
	int		m_nTreatTime;
	int		m_nSpecial;
	CString m_szHcrStatus;
	CString m_szGroupID;

	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnSettingSelect();
    void			OnTreatTimeSelect();
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnInputFormSelect();
	void			OnCancelSelect();
	void			OnPrintSubSelect();
	CHMSBenhAnHTMLDialog(CWnd *pParent, CGuiView* pChuyenkhoa=NULL);
	~CHMSBenhAnHTMLDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMBenhAnHTMLDialog(); 
	int OnEditTMBenhAnHTMLDialog(); 
	int OnDeleteTMBenhAnHTMLDialog(); 
	int OnSaveTMBenhAnHTMLDialog(); 
	int OnCancelTMBenhAnHTMLDialog(); 
	int OnTMBenhAnHTMLDialogListLoadData(); 
	void LoadTab();
	int OnChangeClinicalRecord();
	void OnUpdateRecord();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void OnResizeLayout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
