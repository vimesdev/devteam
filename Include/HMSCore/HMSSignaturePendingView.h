#ifndef HMSSIGNATUREPENDINGVIEW_H
#define HMSSIGNATUREPENDINGVIEW_H

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
#include "GuiUtils.h"
#include "GuiView.h"
class AFX_EXT_CLASS CHMSSignaturePendingView : public CGuiView
{
protected:
public:
    CGuiGroupBox m_wndSearchInformation;
    CGuiGroupBox m_wndStatus;
    CGuiGroupBox m_wndPatientList;
    CGuiRadioButton m_wndUnsign;
    CGuiRadioButton m_wndSigned;
    CGuiLabel m_wndDepartmentLabel;
    CGuiComboBox m_wndDepartment;
    CGuiLabel m_wndFromDateLabel;
    CGuiDateCtrl m_wndFromDate;
    CGuiLabel m_wndToDateLabel;
    CGuiDateCtrl m_wndToDate;
    CGuiLabel m_wndTypeLabel;
    CGuiComboBox m_wndType;
    CGuiLabel m_wndPatientNameLabel;
    CGuiTextCtrl m_wndPatientName;
    CGuiLabel m_wndDocumentNoLabel;
    CGuiNumberCtrl m_wndDocumentNo;
    CGuiButton m_wndRefresh;
    CGuiNumberCtrl m_wndNumber;
    CGuiListCtrl m_wndList;
    CGuiButton m_wndSign;
    CGuiButton m_wndSignBatch;
    CGuiButton m_wndClear;
    int m_nUnsign;
    int m_nSigned;
    CString m_szDepartmentKey;
    CString m_szFromDate;
    CString m_szToDate;
    CString m_szTypeKey;
    CString m_szPatientName;
    long m_nDocumentNo;
    long m_nNumber;
    void OnUnsignSelect();
    void OnSignedSelect();
    
    void OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel);
    void OnDepartmentSelendok();
    // void			OnDepartmentSetfocus();
    // void			OnDepartmentKillfocus();
    long OnDepartmentLoadData();
    // void			OnDepartmentAddNew();
    // void			OnFromDateChange();
    // void			OnFromDateSetfocus();
    // void			OnFromDateKillfocus();
    int OnFromDateCheckValue();
    // void			OnToDateChange();
    // void			OnToDateSetfocus();
    // void			OnToDateKillfocus();
    int OnToDateCheckValue();
    void OnTypeSelectChange(int nOldItemSel, int nNewItemSel);
    void OnTypeSelendok();
    // void			OnTypeSetfocus();
    // void			OnTypeKillfocus();
    long OnTypeLoadData();
    // void			OnTypeAddNew();
    // void			OnPatientNameChange();
    // void			OnPatientNameSetfocus();
    // void			OnPatientNameKillfocus();
    int OnPatientNameCheckValue();
    // void			OnDocumentNoChange();
    // void			OnDocumentNoSetfocus();
    // void			OnDocumentNoKillfocus();
    int OnDocumentNoCheckValue();
    void OnRefreshSelect();
    // void			OnNumberChange();
    // void			OnNumberSetfocus();
    // void			OnNumberKillfocus();
    int OnNumberCheckValue();
    long OnListLoadData();
    void OnListSelectChange(int nOldItem, int nNewItem);
    void OnListDblClick();
    int OnListDeleteItem();
    void OnSignSelect();
    void OnSignBatchSelect();
    void OnClearSelect();
    CHMSSignaturePendingView();
    ~CHMSSignaturePendingView();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void UpdateJson(BOOL bSaveAndValidate);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnAddHMSSignaturePendingView();
    int OnEditHMSSignaturePendingView();
    int OnDeleteHMSSignaturePendingView();
    int OnSaveHMSSignaturePendingView();
    int OnClearHMSSignaturePendingView();
    int OnHMSSignaturePendingViewListLoadData();
    void OnResizeLayout();
};
#endif