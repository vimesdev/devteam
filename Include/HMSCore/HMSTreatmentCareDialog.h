#ifndef HMSTreatmentCareDialog_H
#define HMSTreatmentCareDialog_H

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

typedef struct tagThongTinChamSocV2{
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
	CString szDaitien;
	CString szTieutien;
	int nPage;
	
} ChamSocInfoV2;

/////////////////////
//Dialog phieu cham soc
////////////////////

class AFX_EXT_CLASS CHMSTreatmentCareDialog : public CGuiDialog
{

protected:
	long		m_nDocumentNo;
	long		m_nUID;
	CString		m_szDate;
	float		m_scale;
	CString		m_szType;
	CString		m_szCreatedby;
	BOOL		m_bType;
  
public:
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiLabel		m_wndMonthLabel;
	CGuiComboBox	m_wndMonth;
	CGuiTabCtrl		m_wndTab;
	CGridListView	m_wndTreatList;
	CGridListView	m_wndDateList;
	CGuiButton		m_wndCare;
	CGuiButton		m_wndBeforeOpt;
	CGuiButton		m_wndCareAfterOpt;
	CGuiButton		m_wndCareOfNurse;
	CGuiButton		m_wndParaclinic;
	CGuiButton		m_wndSurgeryOpt;
	CGuiButton		m_wndPrint;
    CGuiButton		m_wndPrintGroup;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndLock;
	CGuiButton		m_wndUnLock;
	CGuiButton		m_wndTruotngaform;
    CGuiButton m_wndTheo_Doi_Cong_Khai;
    

	CString			m_szMonthKey;
	int				m_nTreattime;
	void			OnMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMonthSelendok(); 
	//void			OnMonthSetfocus(); 
	//void			OnMonthKillfocus(); 
	long			OnMonthLoadData(); 
	//void			OnMonthAddNew(); 
	long			OnTreatListLoadData(); 
	void			OnTreatListSelectChange(int nOldItem, int nNewItem); 
	void			OnTreatListDblClick(); 
	int			OnTreatListAddItem(); 
	int			OnTreatListUpdateItem(); 
	int			OnTreatListDeleteItem(); 
	int			OnTreatListDrugOrderCopyItem();
	int			OnTreatListDrugOrderAdviceItem();
	long			OnDateListLoadData(); 
	void			OnDateListSelectChange(int nOldItem, int nNewItem); 
	void			OnDateListDblClick(); 
	int			OnDateListDeleteItem(); 
	void			OnCareSelect(); 
	void			OnBeforeOptSelect(); 
	void			OnCareAfterOptSelect();
	void			OnCareOfNurseSelect();
	void			OnPrintSelect(); 
	void			OnPrintGroupSelect(); 
	void			OnCloseSelect();
	void			OnTruotngaformSelect();

	void			OnLockSelect(); 
	void			OnUnLockSelect(); 
	bool			IsLocked();
	bool			IsSigned(long nID);
    void OnTheo_Doi_Cong_KhaiSelect(); 


	CHMSTreatmentCareDialog(CWnd *pParent, int nMode, long nDocumentNo);
	~CHMSTreatmentCareDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentCareDialog(); 
	int OnEditHMSTreatmentCareDialog(); 
	int OnDeleteHMSTreatmentCareDialog(); 
	int OnSaveHMSTreatmentCareDialog(); 
	int OnCancelHMSTreatmentCareDialog(); 
	int OnHMSTreatmentCareDialogListLoadData(); 
	long OnShowHistory();
	void PrintFollowTemperaturePressure_V2(long nDocNo);
	void OnAddCSC123(CString szType);
	void PrintPhieuChamSoc(CString szType, CString szTypeCS);	
	int  OnCopyTreatmentCare();
    void OnResizeLayout();

protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif