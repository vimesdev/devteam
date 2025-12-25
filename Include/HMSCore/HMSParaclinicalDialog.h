#ifndef HMSParaclinicalDialog_H
#define HMSParaclinicalDialog_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
#include "ListPane.h"
#include "GridListView.h"
#include "HMSExt\HMSExtDef.h"

typedef struct tagPARAITEM {
	CString szGroup;
	CString szID;
	CString szSubItem;
	CString szQty;
	CString szServPrice;
	CString szInsPrice;
	CString szPolPrice;
	CString szReqPrice;
	CString szReqApply;
	CString szName;
	CString szNote;
	CString szSample;
	CString szDiagnosis;
}PARAITEM;


class AFX_EXT_CLASS CHMSParaclinicalDialog : public CGuiDialog
{
protected:
	CArray<CString, CString&> m_arGroup;
	CArray<EDITITEM, EDITITEM&> m_arEditItems;

	CMap<LPCTSTR, LPCTSTR, CString, CString> m_mapDescs;


	CString	m_szGroup;
	CString	m_szDoctorKey, m_szDoctorName;
	BOOL	m_bAutoPrint;
	BOOL	m_bOutPackage;
	BOOL	m_bAllList;
    BOOL	m_bAutoSign;
	bool	m_bIsC14;
	CString	m_szID;
	CString	m_szAdmitDate;
	bool	m_bTestOnly;
	BOOL	m_bOrderDateEnable;

	CString	m_szSex;
	CString m_szAdmitIcd;
	CString m_szMainIcd;
	CString m_szRelIcd;
	CString m_szExtIns;
	long	m_nExtInsCompanyId;
    float m_scale;

public:
	CArray<int, int> m_orderIDs;
	CArray<PARAITEM, PARAITEM&> m_arItems;
	bool		m_bHasApply;
	CString		m_szSample;
	CString		m_szNote;
	CString		m_szDiagnosis;
	CString		m_szPhanloainhiemkhuanKey;
	CListPane	m_wndParaclinicalList;
	CGuiLabel		m_wndPerformDepartmentLabel;
	CGuiComboBox	m_wndPerformDepartment;
	CGridListView	m_wndTestList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndAdd;
	CGridListView	m_wndSelectList;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndOrderDateLabel;
	CGuiDateTimeCtrl m_wndOrderDate;
	CGuiButton		m_wndGroup;
	CGuiCheckBox	m_wndAutoPrint;
	CGuiCheckBox	m_wndOutPackage;
	CGuiCheckBox	m_wndAllList;
    CGuiCheckBox	m_wndAutoSign;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndPaySourceLabel;
	CGuiComboBox	m_wndPaySource;
	CString	m_szPaySourceKey;
	CGuiLabel		m_wndEmergencyLabel;
	CGuiComboBox	m_wndTestType;
	CString	m_szTestTypeKey;

	CString	m_szPerformDepartmentKey;
	CString	m_szSearch;
	CString	m_szOrderDate;
	long	m_nTreatIdx;
	long	m_nRelativeID;
	CString m_szGroupB1E;
	int		m_nIndexB1E;
	CString m_szFeeID;

	long			OnParaclinicalListLoadData();
	void			OnParaclinicalListSelectChange(int nOldItem, int nNewItem);
	void			OnParaclinicalListDblClick();
	int			OnParaclinicalListDeleteItem();
	void			OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnPerformDepartmentSelendok();
	//void			OnPerformDepartmentSetfocus(); 
	//void			OnPerformDepartmentKillfocus(); 
	long			OnPerformDepartmentLoadData();
	void			OnPerformDepartmentAddNew();
	long			OnTestListLoadData();
	void			OnTestListSelectChange(int nOldItem, int nNewItem);
	void			OnTestListDblClick();
	void			OnTestListClick();
	void			OnTestListAddItem();

	int			OnTestListDeleteItem();
	void			OnSearchChange();
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue();
	void			OnAddSelect();
	long			OnSelectListLoadData();
	void			OnSelectListSelectChange(int nOldItem, int nNewItem);
	void			OnSelectListDblClick();
	int			OnSelectListDeleteItem();
	int			OnSelectListAddDescItem();
	void			OnRemoveSelect();
	void			OnApplySelect();
	void			OnCloseSelect();
	void			OnOrderDateLabelSelect();
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue();
	void			OnGroupSelect();
	void		OnAllListSelect();
	void		AddParaItem(CString szItemID);
	long			OnPaySourceLoadData();
	long			OnTestTypeLoadData();
	int			OnPerformRoomUsageSelect();
	int			OnExportToExcelID();

	CHMSParaclinicalDialog(CWnd* pParent);

	~CHMSParaclinicalDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalDialog();
	int OnEditHMSParaclinicalDialog();
	int OnDeleteHMSParaclinicalDialog();
	int OnSaveHMSParaclinicalDialog();
	int OnCancelHMSParaclinicalDialog();
	int OnHMSParaclinicalDialogListLoadData();

	void PrintParaInstruction(long nDocNo, long nOrderID);
	void PrintParaInstruction(long nDocNo, CArray<int, int>* pOrderIDs);
	int ShowFeeWarning(CString szFee_id);
	int CheckDeposit(long nDocNo, bool& bDepositRequest);
};
#endif
