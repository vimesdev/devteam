#ifndef HMSPatientERM_H
#define HMSPatientERM_H

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

#include "GridListView.h"
#include "TreeCtrlEx.h"
#include "ReportPrinter.h"
/// <summary>
/// CEMRPatientProfile rename to CEMRPatientView
/// </summary>

class AFX_EXT_CLASS CEMRPatientProfile : public CGuiView
{
protected:
afx_msg void OnNMCustomdrawGroupTree(NMHDR* pNMHDR, LRESULT* pResult);
public:
	struct SignatureInfoTree {
    CString signature_id;
    CString pdfname;
    CString type_id;
    CString sign_date;
    CString createdby;
    CString description;
    CString status;
    CString sign_status;
	CString nhom_cls;
	CString	docno;
	int nTotal;
	int nChuaKy;
	int nDaky;
	int nDaHoanThanh;
	 // Constructor mặc định
    SignatureInfoTree()
    {
        nDaky = 0;
        nChuaKy = 0;
        nDaHoanThanh = 0;
        nTotal = 0;
    }

};
	struct SignatureType
{
    CString type_id;   // Mã loại chữ ký
    CString description; // Mô tả loại chữ ký
};

	CReportPrinter *m_pPrinter;
		
	CGuiGroupBox	m_wndInformation;
	CGuiTabCtrl	m_wndTreatmentTab;
	CGuiButton		m_wndTreatmentTracking;
	CGuiButton		m_wndExportEMR;
	CGuiButton		m_wndUpdateEMR;
	CGuiButton		m_wndElectronicRecord;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CTreeCtrlEx		m_wndGroupTree;
	CGuiCheckBox	m_wndLoadByStatus;
	CGuiCheckBox	m_wndLoadByPatient;
	CGuiButton		m_wndApproval;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSignFile;
	CGuiButton		m_wndSetting;
	CGuiTextCtrl	m_wndDesc;
	CString	m_szDesc;




	CString	m_szDepartmentKey;
	long	m_nDocumentNo;
	long	m_nPatientNo;
	CString	m_szPatientName;
	CString	m_szSex;
	CString	m_szAge;

	BOOL	m_bIsSave;
	long	m_nQuanlity;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bLoadByStatus;
	BOOL	m_bLoadByPatient;
	CString m_szSignatureID;

	BOOL	m_bIsOutPatientRecord;
	long	m_nOutPatientRecordID;

	CString m_szArrDocno;
	
	
	void			OnTreatmentTabSelectChange(int nOld, int nNew); 
	void			OnTreatmentTrackingSelect(); 
	void			OnExportEMRSelect(); 
	void			OnUpdateEMRSelect(); 
	void			OnElectronicRecordSelect(); 
	void			OnPrescriptionSelect(); 
	void			OnTreatmentHistorySelect(); 
	void			OnPrintSelect(); 
	void			OnTypySearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypySearchSelendok(); 
	//void			OnTypySearchSetfocus(); 
	//void			OnTypySearchKillfocus(); 
	long			OnTypySearchLoadData(); 
	//void			OnTypySearchAddNew(); 
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnLoadSelect(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnIsSaveSelect(); 
	//void			OnQuanlityChange(); 
	//void			OnQuanlitySetfocus(); 
	//void			OnQuanlityKillfocus(); 
	int			OnQuanlityCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 

	long			OnGroupTreeLoadData(); 
	void			OnGroupTreeSelectChange(int nOldItem, int nNewItem); 
	void			OnGroupTreeDblClick(); 
	int			OnGroupTreeDeleteItem(); 
	void		OnGroupTreeSelChange(HTREEITEM, HTREEITEM);
	void			OnLoadByStatusSelect(); 
	void			OnLoadByPatientSelect();
	void			OnApprovalSelect();
	
	void			OnAddSelect(); 
	void			OnSignFileSelect(); 
	void			OnSettingSelect();

	void			OnDeleteSelect();

	//void			OnDescChange(); 
	//void			OnDescSetfocus(); 
	//void			OnDescKillfocus(); 
	int			OnDescCheckValue(); 

	CEMRPatientProfile(long nDocumentNo=0);
	~CEMRPatientProfile();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientERM(); 
	int OnEditHMSPatientERM(); 
	int OnDeleteHMSPatientERM(); 
	int OnSaveHMSPatientERM(); 
	int OnCancelHMSPatientERM(); 
	int OnHMSPatientERMListLoadData(); 
	void RefeshData(long nDocno, bool bIsOutPatient = false, long nOutPatientRecordID =0 );
	CString GetStatusDocument(CString szSignatrueID);
    void OnResizeLayout();
    DECLARE_MESSAGE_MAP()
    afx_msg void OnSize(UINT nType, int cx, int cy);
	
	

};
#endif
