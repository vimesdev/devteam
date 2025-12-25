#ifndef HMSTreatmentTrackingDialog_H
#define HMSTreatmentTrackingDialog_H

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
#include "GridListView.h"
#include "HMSTreatmentPrescriptionPopup.h"
#include "HMSTreatmentPrescriptionPopupEx.h"
#include "HMSTreatmentPrescriptionPopup_V2.h"
///////////////////////////////////////////
//PHIEU THEO DOI DIEU TRI
///////////////////////////////////////////

typedef struct tagThongTinChamSoc{
	CString	szDate;
	CString szTime;
	int	nMach;
	float	nNhietDo;
	CString szSpO2;
	CString	szTrigiac;
	CString	szDaNiemMac;
	CString szHuyetAp;
	CString	szNhiptho;
	
	CString	szPhan;
	CString szNuocTieu;
	float nCanNang;
	CString szUserID;
	int nPage;
	
} ChamSocInfo;

class AFX_EXT_CLASS CHMSTreatmentTrackingDialog : public CGuiDialog
{
protected:
	long		m_nDocumentNo;
	long		m_nTreatIdx;
	CString		m_szDate;
	CString		m_szDrugAdvice;
	CString		m_szNoteOfDean;
	CString		m_szCreatedBy;
	bool		m_bRefreshTreat;
	float		m_scale;
	CHMSTreatmentPrescriptionPopup*		m_wndPopup;
	CHMSTreatmentPrescriptionPopup_V2*		m_wndPopup_V2;
	CHMSTreatmentPrescriptionPopupEx*	 m_wndPopupEx;
    CString		m_szRecordNo;

public:

	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiLabel		m_wndMonthLabel;
	CGuiComboBox	m_wndMonth;
	CGuiTabCtrl		m_wndTab;
	CGridListView	m_wndTreatList;
	CGridListView	m_wndDateList;
	CGuiButton		m_wndDisease;
	CGuiButton		m_wndPrescription;
	CGuiButton		m_wndParaclinic;
	CGuiButton		m_wndSurgeryOpt;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndLock;
	CGuiButton		m_wndUnLock;
	CGuiButton		m_wndAdviseDrug;
	CGuiButton		m_wndCreatininHistory;
	CGuiButton		m_wndApplyPhacDo;
	CGuiButton		m_wndPatientCare;

	

	CString			m_szMonthKey;
	int				m_nStorageID;
	void			OnMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMonthSelendok(); 
	//void			OnMonthSetfocus(); 
	//void			OnMonthKillfocus(); 
	long			OnMonthLoadData(); 
	//void			OnMonthAddNew(); 
	long			OnTreatListLoadData(); 
	void			OnTreatListSelectChange(int nOldItem, int nNewItem); 
	void			OnTreatListDblClick(); 
	int			OnTreatListUpdateDiseaseItem();
	int			OnTreatListDeleteItem();
	int			OnTreatListDrugOrderCopyItem();
	int			OnTreatListCancerOrderItem();
	int			OnTreatListExternalOrderItem();
	int			OnTreatListDrugOrderAdviceItem();
	int			OnTreatListNoteOfDeanItem();
	int			OnTreatListPrintPrescription();
	int			OnTreatListArrangePrescription();
	int			OnTreatListDeleteOrder();
	long			OnDateListLoadData(); 
	void			OnDateListSelectChange(int nOldItem, int nNewItem); 
	void			OnDateListDblClick(); 
	int			OnDateListDeleteItem(); 

	int			OnDateListCopyAsItem();

	int			OnDateListConfirmItem(); 
	int			OnDateListDisconfirmItem(); 
	int			OnAddNew(bool copyAs = false);
	void			OnDiseaseSelect(); 
	void			OnPrescriptionSelect(); 
	void			OnPrescriptionEdit(long nOrderId, long nProductId); 
	void			OnParaclinicSelect(); 
	void			OnSurgeryOperationSelect(); 
	int				OnClearOrderPrescription();
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 

	void			OnLockSelect(); 
	void			OnUnLockSelect(); 
	void			OnAdviseDrugSelect();
	void			OnCreatininHistorySelect();
	bool			IsLocked();

	void	LoadDrugList();
	void	LoadDrugListEx();
	void	LoadParaclinicalList();
	void	LoadOperationList();

	void	OnPrintParaclinicOrder();
	int OnTreatListSmartPrescriptionItem();
	void			OnApplyPhacDoSelect();
	void			OnPatientCareSelect();

	CHMSTreatmentTrackingDialog(CWnd *pParent, int nMode, long nDocumentNo);
	~CHMSTreatmentTrackingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentTrackingDialog(); 
	int OnEditHMSTreatmentTrackingDialog(); 
	int OnDeleteHMSTreatmentTrackingDialog(); 
	int OnSaveHMSTreatmentTrackingDialog(); 
	int OnCancelHMSTreatmentTrackingDialog(); 
	int OnHMSTreatmentTrackingDialogListLoadData(); 
	long OnShowHistory();
	int	OnTreatListEditPrescriptionQty();
	void Refresh();
	void RefreshDrugs();
	void PrintFollowTemperaturePressure(long nDocNo);
	void OnTreatListCreateOptTemplate();
	int OnDateListRefresh();
	bool IsSigned(long nID);
    void PrintExPrescription(long nOrderId, bool bPreview = true,
                             bool bDirect = false);

protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void	SetCreatininWarningColor(long nDocNo, CWnd* pWnd);
};
#endif