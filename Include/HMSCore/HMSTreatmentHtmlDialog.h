#ifndef HMSTreatmentHtmlDIALOG_H
#define HMSTreatmentHtmlDIALOG_H

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

#include "GridListView.h"
#include "GuiView.h"
#include "HTMLayoutCtrlEx.h"
#include "MFCReportCtrl.h"

class AFX_EXT_CLASS CHMSTreatmentHtmlDialog : public CGuiDialog
{
protected:
public:
    bool m_bSingleView;
    bool m_bUpdateMode;
    CWnd *m_pView;
    CRect m_rcView;
    CMap<LPCTSTR, LPCTSTR, CGuiView *, CGuiView *> m_mapViews;

    CString m_szType;
    int m_nListWidth;
    CString m_szFormID;
    CString m_szFormType;
    CString m_szMultiSheet;

    long m_nDocumentNo;
    CString m_szDeptID;
    int m_nRefIndex;
    int m_nRoomID;
    bool m_bFound;
    long m_nOptIdx;
    CString m_szOptKey;
    float m_scale;
    CString m_szUID;
    CString m_szFile;
    long m_nOrderId;
    long m_nID;
    bool m_bSurgery;

    CHTMLayoutCtrlEx m_wndHtml;

    CGuiButton m_wndAdd;
    CGuiButton m_wndUpdate;
    CGuiButton m_wndSave;
    CGuiButton m_wndCancel;
    CGuiButton m_wndPrint;
    CGuiButton m_wndExport;
    CGuiButton m_wndClose;
    CGuiButton m_wndExTask;

    void OnAddSelect();
    void OnUpdateSelect();
    void OnSaveSelect();
    void OnCancelSelect();
    void OnPrintSelect();
    void OnExportSelect();
    void OnSignSelect();
    void OnCloseSelect();
    void OnExTaskSelect();
    CHMSTreatmentHtmlDialog(CWnd *pParent, CString szForm, int nMode,
                            bool bSingleView = false, bool bUpdateMode = false);
    ~CHMSTreatmentHtmlDialog();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void UpdateJson(BOOL bSaveAndValidate);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnAddHMSTreatmentHtmlDialog();
    int OnEditHMSTreatmentHtmlDialog();
    int OnDeleteHMSTreatmentHtmlDialog();
    int OnSaveHMSTreatmentHtmlDialog();
    int OnCancelHMSTreatmentHtmlDialog();
    int OnHMSTreatmentHtmlDialogListLoadData();
    virtual BOOL PreTranslateMessage(MSG *pMsg);
    void LoadSurgeryInfo(long nDocNo, int nIDx, long nOrderID);
    void LoadBasicInfo();
    void LoadOldDataForm();
    void LoadExtInfo();
    void LoadDiagnostic();
    void LoadDeptRoomBed();
    void LoadClinicalRecord();
    long LoadHtmlForms();
    void OnDeleteDrug();
    void GenBarcode();
    void LoadTreatmentInfo();
    void ShowOpt(BOOL bFlag);

    virtual CGuiView *CreateView(LPCTSTR szName);
    void ShowView();
    void HideView();

    DECLARE_MESSAGE_MAP()
    afx_msg void OnSize(UINT nType, int cx, int cy);
    void OnResizeLayout();
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
#endif
