#ifndef HMSSignatureTRANSFER_H
#define HMSSignatureTRANSFER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright Â© Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
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
#include "GridListView.h"
#include "ReportPrinter.h"
class AFX_EXT_CLASS CHMSSignatureTransfer : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndgrpPeriot;
	CReportPrinter*	m_pPrinter;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiButton		m_wndSignUp;
	CGuiButton		m_wndLoad;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
    CGuiLabel		m_wndSignCountLabel;
    CGuiComboBox	m_wndSignCount;
	CGuiRadioButton	m_wndOpen;
	CGuiRadioButton	m_wndApproval;
	CGuiRadioButton	m_wndCancel;
	CGuiRadioButton	m_wndAll;
    
	

	CGuiButton m_wndSign;
    CGuiButton m_wndSignBatch;
    CGuiButton m_wndSendBatch;
    CGuiButton m_wndEMRPreview;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTypeKey;
	CString	m_szPatientName;
	CString m_szRptName;
	long	m_nDocumentNo;
	long	m_nOrderID;
	CString m_szSignatureID;
	//CString	m_szStatusKey;
	CString	m_szDepartmentKey;
    CString m_szSignCountKey;
	CString m_szFormID;
	int		m_nState;
	
    double m_nScale;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnSignUpSelect(); 
	void			OnLoadSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListSignaturePDFItem(); 
	int			OnListSignatureXMLItem(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew();
    void OnSignCountSelectChange(int nOldItemSel, int nNewItemSel);
    void OnSignCountSelendok();
    // void			OnSignCountSetfocus();
    // void			OnSignCountKillfocus();
    long OnSignCountLoadData();
    // void			OnSignCountAddNew();
	int				OnListViewRecordPatient();
	void	OnCreateXML(long nDocno, long nOrderID, int nType, CString szName);
	void	OnSignatureXML(long nDocno, long nOrderID, int nType, CString szName);
	void	OnPostXML(long nDocno, long nOrderID, int nType, CString szName);
	void			OnOpenSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnAllSelect();
    void OnSignSelect();
	void	OnSignBatchSelect(); 
	void OnSendBatchSelect();
    void OnEMRPreviewSelect();
    void OnClearMarkedSelect();

	CHMSSignatureTransfer();
	~CHMSSignatureTransfer();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSignatureTransfer(); 
	int OnEditHMSSignatureTransfer(); 
	int OnDeleteHMSSignatureTransfer(); 
	int OnSaveHMSSignatureTransfer(); 
	int OnCancelHMSSignatureTransfer(); 
	int OnHMSSignatureTransferListLoadData(); 
	void OnResizeLayout();
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
    DECLARE_MESSAGE_MAP()
    afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
