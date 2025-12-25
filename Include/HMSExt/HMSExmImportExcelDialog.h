#ifndef HMSEXMIMPORTEXCELDIALOG_H
#define HMSEXMIMPORTEXCELDIALOG_H

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
#include "HMSExtDef.h"

class AFX_EXT_CLASS CHMSExmImportExcelDialog : public CGuiDialog
{
protected:
    int IsMaped(int nCol);
    void InitList();
    void InitMap();

public:
    // long	m_nCompanyId;
    CString m_szCompanyId;
    long m_nContractId;

    CArray<MapColumn, MapColumn> m_maps;
    void AddRefColumn(int nIndex, CString szField, CString szColName);
    int m_nQuyetdinhIdx;
    int m_nSodangkyIdx;
    int m_nNgaycongboIdx;
    CString m_szCurrentDir;
    CGuiGroupBox m_wndSearchInformation;
    CGuiButton m_wndBrowse;
    CGuiTextCtrl m_wndURL;
    CGuiButton m_wndApply;
    CGuiListCtrl m_wndList;
    CGuiCheckBox m_wndSoldier;
    CString m_szURL;
    CStringArray m_arrList;
    BOOL m_bSoldier;
    CDbfMap m_emplTbl;

    void OnBrowseSelect();
    // void			OnURLChange();
    // void			OnURLSetfocus();
    // void			OnURLKillfocus();
    int OnURLCheckValue();
    void OnApplySelect();
    long OnListLoadData();
    void OnListSelectChange(int nOldItem, int nNewItem);
    void OnListDblClick();
    int OnListDeleteItem();
    void OnSoldierSelect();
    CHMSExmImportExcelDialog(CWnd *pParent);
    ~CHMSExmImportExcelDialog();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnAddHMSExmImportExcelDialog();
    int OnEditHMSExmImportExcelDialog();
    int OnDeleteHMSExmImportExcelDialog();
    int OnSaveHMSExmImportExcelDialog();
    int OnCancelHMSExmImportExcelDialog();
    int OnHMSExmImportExcelDialogListLoadData();
};
#endif