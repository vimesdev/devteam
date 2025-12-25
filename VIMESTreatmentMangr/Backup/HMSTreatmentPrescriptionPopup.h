#ifndef HMSTreatmentPrescriptionPopup_H
#define HMSTreatmentPrescriptionPopup_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010.
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.
//	Unauthorized reproduction or distribution of this program,
//	or any portion of it, may result in severe civil and criminal penalties,
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan
//men nay se 	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi
//da dung theo Luat qui dinh. 	File nay la mot phan cua thu vien lap trinh(GUI).
//Ban quyen cua Hoang Van Hay. 2006-2008 	THONG TIN LIEN HE: 	Email  :
//hayhv@vimes.com.vn hoac hayhv@yahoo.com 	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "DbField.h"
#include "GuiAutoTextCtrl.h"
#include "GuiPopup.h"
#include "GuiUtils.h"
#include "HMSDrugOrdering.h"
#include "MFCInputGrid.h"

class CHMSTreatmentPrescriptionPopup : public CGuiPopup
{

protected:
public:
    CWnd *m_pParentOwner;
    bool m_bEditQty;
    int m_nStorageId;
    long m_nProductId;

    long m_nOrderID;
    CString m_szOrders;
    int m_nLevel1;
    int m_nLevel2;
    int m_nLevel3;
    bool m_bInPackage;
    bool m_bOutLine;
    bool m_bIsReq;
    long m_nTreatIdx;
    CString m_szTreatDate;
    CString m_szOrderDate;
    CString m_szStorageObjects;
    BOOL    m_bCancer;
    BOOL m_bServiceWarehouse;
    BOOL m_bInsWarehouse;
    CString m_szNameKey;
    BOOL m_bGenericSearch;
    
    CString m_szUnit;
    BOOL m_bOutPrescription;

    CDbfMap m_hms_ipharmaorderTbl;

    CString m_szStorageKey;

    float m_nQty;
    float m_nUseQty;
    float m_nMaxQuantity;
    CString m_szIndicationKey;
    CString m_szSpeed;
    CString m_szUsage;
    CString m_szOtherSourceKey;
    CString m_szUseTime;
    

    // CGuiGroupBox	m_wndPrescriptionInput;
    CGuiGroupBox m_wndPrescription;
    CGuiLabel m_wndStorageLabel;
    CGuiComboBox m_wndStorage;
	CGuiCheckBox	m_wndInsWarehouse;
    CGuiCheckBox m_wndServiceWarehouse;
	CGuiCheckBox	m_wndOutPrescription;
	CGuiCheckBox	m_wndGenericSearch;
    CGuiComboBox m_wndName;
    CGuiLabel m_wndUnitLabel;
    CGuiTextCtrl m_wndUnit;
	CGuiLabel		m_wndNameLabel;

    CGuiLabel m_wndQuantityLabel;
    CGuiNumberCtrl m_wndQty;
    CGuiLabel m_wndMaxQuantityLabel;
    CGuiNumberCtrl m_wndMaxQuantity;
	CGuiLabel		m_wndOtherSourceLabel;
	CGuiComboBox	m_wndOtherSource;
    CGuiCheckBox m_wndCancerOpt;
    CGuiLabel m_wndIndicationLabel;
    CGuiComboBox m_wndIndication;
    CGuiLabel m_wndSpeedLabel;
    CGuiTextCtrl m_wndSpeed;
	CGuiLabel		m_wndUseQtyLabel;
	CGuiNumberCtrl	m_wndUseQty;
	CGuiLabel		m_wndUsageTimeLabel;
	CGuiTimeCtrl	m_wndUsageTime;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndGrid;
	CGuiLabel		m_wndUsageLabel;
    CGuiTextCtrl m_wndUsage;
    CGuiLabel   m_wndPaySourceLabel;
    CGuiComboBox m_wndPaySource;
    CString     m_szPaySourceKey;

    CGuiButton m_wndDoseWarning;
    CGuiButton m_wndSave;
    CGuiButton m_wndClose;

    void OnStorageSelectChange(int nOldItemSel, int nNewItemSel);
    void OnStorageSelendok();
    // void			OnStorageSetfocus();
    // void			OnStorageKillfocus();
    long OnStorageLoadData();
    // void			OnStorageAddNew();
	void			OnInsWarehouseSelect(); 
    void OnServiceWarehouseSelect();
	void			OnOutPrescriptionSelect(); 
	void			OnGenericSearchSelect(); 
    void OnNameSelectChange(int nOldItemSel, int nNewItemSel);
    void OnNameSelendok();
    // void			OnNameSetfocus();
    // void			OnNameKillfocus();
    long OnNameLoadData();
    // void			OnNameAddNew();
    // void			OnUnitChange();
    // void			OnUnitSetfocus();
    // void			OnUnitKillfocus();
    int OnUnitCheckValue();
    // void			OnQtyChange();
    // void			OnQtySetfocus();
    // void			OnQtyKillfocus();
    int OnQtyCheckValue();
    // void			OnMaxQuantityChange();
    // void			OnMaxQuantitySetfocus();
    // void			OnMaxQuantityKillfocus();
    int OnMaxQuantityCheckValue();
	void			OnOtherSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOtherSourceSelendok(); 
	//void			OnOtherSourceSetfocus(); 
	//void			OnOtherSourceKillfocus(); 
	long			OnOtherSourceLoadData(); 
	//void			OnOtherSourceAddNew(); 
	void			OnCancerOptSelect(); 
    void OnIndicationSelectChange(int nOldItemSel, int nNewItemSel);
    void OnIndicationSelendok();
    // void			OnIndicationSetfocus();
    // void			OnIndicationKillfocus();
    long OnIndicationLoadData();
    int  OnIndicationCheckValue();
    int  OnOccupationCheckValue();
    // void			OnIndicationAddNew();
    // void			OnSpeedChange();
    // void			OnSpeedSetfocus();
    // void			OnSpeedKillfocus();
    int OnSpeedCheckValue();
	//void			OnUseQtyChange(); 
	//void			OnUseQtySetfocus(); 
	//void			OnUseQtyKillfocus()
    void			OnUsageSetfocus(); 
; 
	int			OnUseQtyCheckValue(); 
	//void			OnUsageTimeChange(); 
	//void			OnUsageTimeSetfocus(); 
	//void			OnUsageTimeKillfocus(); 
	int			OnUsageTimeCheckValue(); 
	void			OnAddLineSelect(); 
    long OnGridLoadData();
    void OnGridSelectChange(int nOldItem, int nNewItem);
    void OnGridDblClick();
    int OnGridDeleteItem(); 

	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
    void OnDoseWarningSelect();
    long OnPaySourceLoadData();
    bool CheckBeforeSaveLine();
    bool SaveDosageLine(long docno, long orderid, long nProductId);

    void OnSaveSelect();
    void OnCloseSelect();

    


    //	CHMSTreatmentPrescriptionPopup();
    CHMSTreatmentPrescriptionPopup(CWnd *pParent, int nMode = VM_ADD, int x = 0,
                                   int y = 0);
    ~CHMSTreatmentPrescriptionPopup();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
	void UpdateJson(BOOL bSaveAndValidate);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnAddHMSTreatmentPrescriptionPopup();
    int OnEditHMSTreatmentPrescriptionPopup();
    int OnDeleteHMSTreatmentPrescriptionPopup();
    int OnSaveHMSTreatmentPrescriptionPopup();
    int OnCancelHMSTreatmentPrescriptionPopup();
    int OnHMSTreatmentPrescriptionPopupListLoadData();
    
    // Ham ket thua tu lop CGuiPopup;
    //	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
    void ClosePopup();
    //	void	CreatePopup(bool bInPackage=false);
    int CheckClinicalPharmacy(BOOL &bShow);
    int ShowClinicalWarning();
    void OnResizeLayout();
    DECLARE_MESSAGE_MAP()
    virtual BOOL PreTranslateMessage(MSG *pMsg);
};
#endif
