#ifndef HMSEMERGENCYRECEIPTDIALOG_H
#define HMSEMERGENCYRECEIPTDIALOG_H

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
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan
//men nay se 	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi
//da dung theo Luat qui dinh. 	File nay la mot phan cua thu vien lap trinh(GUI).
//Ban quyen cua Hoang Van Hay. 2006-2008 	THONG TIN LIEN HE: 	Email  :
//hayhv@vimes.com.vn hoac hayhv@yahoo.com 	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "DbField.h"
#include "GuiDialog.h"
#include "GuiUtils.h"
class CHMSEmergencyReceiptDialog : public CGuiDialog
{
protected:
public:
    CGuiGroupBox m_wndEmergencyInfo;
    CGuiLabel m_wndWorkPlaceLabel;
    CGuiTextCtrl m_wndWorkPlace;
    CGuiLabel m_wndTransferPlaceLabel;
    CGuiComboBox m_wndTransferPlace;
    CGuiLabel m_wndEmergencyTimeLabel;
    CGuiComboBox m_wndEmergencyTime;
    CGuiLabel m_wndTransferDiagnosticLabel;
    CGuiTextCtrl m_wndTransferDiagnostic;
    CGuiLabel m_wndEmergencyTypeLabel;
    CGuiComboBox m_wndEmergencyType;
    CGuiLabel m_wndPatientStatusLabel;
    CGuiComboBox m_wndPatientStatus;
    CGuiLabel m_wndAdmitExamineLabel;
    CGuiTextCtrl m_wndAdmitExamine;
    CGuiLabel m_wndTestLabel;
    CGuiTextCtrl m_wndTest;
    CGuiLabel m_wndEmergencyDiagnosticLabel;
    CGuiTextCtrl m_wndEmergencyDiagnostic;
    CGuiLabel m_wndResolveLabel;
    CGuiTextCtrl m_wndResolve;
    CGuiLabel m_wndSpecialityDiagnosticLabel;
    CGuiTextCtrl m_wndSpecialityDiagnostic;
    CGuiButton m_wndUpdate;
    CGuiButton m_wndSave;
    CGuiButton m_wndCancel;
    CGuiButton m_wndPrint;
    CGuiButton m_wndClose;
    CGuiButton m_wndPhieuChamSoc;
    CGuiLabel m_wndHuongXuTriLabel;
    CGuiComboBox m_wndHuongXuTri;
    CString m_szWorkPlace;
    CString m_szTransferPlaceKey;
    CString m_szEmergencyTimeKey;
    CString m_szTransferDiagnostic;
    CString m_szEmergencyTypeKey;
    CString m_szPatientStatusKey;
    CString m_szAdmitExamine;
    CString m_szTest;
    CString m_szEmergencyDiagnostic;
    CString m_szResolve;
    CString m_szSpecialityDiagnostic;
    CDbfMap m_hms_emergencyTbl;
    long m_nDocNo;
    long m_nReceptIdx;
    CString m_szSuggestion;
    CString m_szInDept;
    CString m_szExamDate;
    bool m_bIsUpdate;
    CString m_szHuongXuTriKey;

    // void			OnWorkPlaceChange();
    // void			OnWorkPlaceSetfocus();
    // void			OnWorkPlaceKillfocus();
    int OnWorkPlaceCheckValue();
    void OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel);
    void OnTransferPlaceSelendok();
    // void			OnTransferPlaceSetfocus();
    // void			OnTransferPlaceKillfocus();
    long OnTransferPlaceLoadData();
    // void			OnTransferPlaceAddNew();
    void OnEmergencyTimeSelectChange(int nOldItemSel, int nNewItemSel);
    void OnEmergencyTimeSelendok();
    // void			OnEmergencyTimeSetfocus();
    // void			OnEmergencyTimeKillfocus();
    long OnEmergencyTimeLoadData();
    // void			OnEmergencyTimeAddNew();
    // void			OnTransferDiagnosticChange();
    // void			OnTransferDiagnosticSetfocus();
    // void			OnTransferDiagnosticKillfocus();
    int OnTransferDiagnosticCheckValue();
    void OnEmergencyTypeSelectChange(int nOldItemSel, int nNewItemSel);
    void OnEmergencyTypeSelendok();
    // void			OnEmergencyTypeSetfocus();
    // void			OnEmergencyTypeKillfocus();
    long OnEmergencyTypeLoadData();
    // void			OnEmergencyTypeAddNew();
    void OnPatientStatusSelectChange(int nOldItemSel, int nNewItemSel);
    void OnPatientStatusSelendok();
    // void			OnPatientStatusSetfocus();
    // void			OnPatientStatusKillfocus();
    long OnPatientStatusLoadData();
    // void			OnPatientStatusAddNew();
    // void			OnAdmitExamineChange();
    // void			OnAdmitExamineSetfocus();
    // void			OnAdmitExamineKillfocus();
    int OnAdmitExamineCheckValue();
    // void			OnTestChange();
    // void			OnTestSetfocus();
    // void			OnTestKillfocus();
    int OnTestCheckValue();
    // void			OnEmergencyDiagnosticChange();
    // void			OnEmergencyDiagnosticSetfocus();
    // void			OnEmergencyDiagnosticKillfocus();
    int OnEmergencyDiagnosticCheckValue();
    // void			OnResolveChange();
    // void			OnResolveSetfocus();
    // void			OnResolveKillfocus();
    int OnResolveCheckValue();
    void OnUpdateSelect();
    void OnSaveSelect();
    void OnCancelSelect();
    void OnPrintSelect();
    void OnCloseSelect();
    void OnResolveLabelSelect();
    void OnPhieuChamSocSelect();
    CHMSEmergencyReceiptDialog(CWnd *pParent);
    ~CHMSEmergencyReceiptDialog();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnAddHMSEmergencyReceiptDialog();
    int OnEditHMSEmergencyReceiptDialog();
    int OnDeleteHMSEmergencyReceiptDialog();
    int OnSaveHMSEmergencyReceiptDialog();
    int OnCancelHMSEmergencyReceiptDialog();
    int OnHMSEmergencyReceiptDialogListLoadData();
    long OnHuongXuTriLoadData();

    void OnPrintReceipt(bool bPreview = false);
};
#endif
