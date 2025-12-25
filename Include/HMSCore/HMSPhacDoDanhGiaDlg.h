#ifndef HMSPHACDODANHGIADLG_H
#define HMSPHACDODANHGIADLG_H

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
class  CHMSPhacDoDanhGiaDlg : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndgrpconntrol;
	CGuiLabel		m_wndPhacDoLabel;
	CGuiComboBox	m_wndPhacDo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiLabel		m_wndKetQuaIDLabel;
	CGuiComboBox	m_wndKetQuaID;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYOB;
	CGuiLabel		m_wndAddresLabel;
	CGuiTextCtrl	m_wndAdress;
	CGuiButton		m_wndTerminate;
	CGridListView	m_wndList;
	CGuiButton		m_wndSave;
	CGuiLabel		m_wndTGDanhGiaLabel;
	CGuiDateTimeCtrl	m_wndTimeDanhGia;
	CString	m_szPhacDoKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStatusKey;
	CString	m_szResult;
	CString	m_szKetQuaIDKey;
	CString	m_szPatientName;
	CString	m_szYOB;
	CString	m_szAdress;
	CString	m_szTimeDanhGia;
	long m_nPhacDoID;
	CDbfMap	m_hms_phacdo_applyTbl;
	long m_nPhacDoApplyID;
	long m_nDocumentNo;
	long m_nTreatIdx;
	CString m_szDrugAdvice;
	void			OnPhacDoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhacDoSelendok(); 
	//void			OnPhacDoSetfocus(); 
	//void			OnPhacDoKillfocus(); 
	long			OnPhacDoLoadData(); 
	//void			OnPhacDoAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	void			OnKetQuaIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKetQuaIDSelendok(); 
	//void			OnKetQuaIDSetfocus(); 
	//void			OnKetQuaIDKillfocus(); 
	long			OnKetQuaIDLoadData(); 
	//void			OnKetQuaIDAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYOBChange(); 
	//void			OnYOBSetfocus(); 
	//void			OnYOBKillfocus(); 
	int			OnYOBCheckValue(); 
	//void			OnAdressChange(); 
	//void			OnAdressSetfocus(); 
	//void			OnAdressKillfocus(); 
	int			OnAdressCheckValue(); 
	void			OnTerminateSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnSaveSelect(); 
	//void			OnTimeDanhGiaChange(); 
	//void			OnTimeDanhGiaSetfocus(); 
	//void			OnTimeDanhGiaKillfocus(); 
	int			OnTimeDanhGiaCheckValue(); 
	CHMSPhacDoDanhGiaDlg(CWnd *pParent);
	~CHMSPhacDoDanhGiaDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoDanhGiaDlg(); 
	int OnEditHMSPhacDoDanhGiaDlg(); 
	int OnDeleteHMSPhacDoDanhGiaDlg(); 
	int OnSaveHMSPhacDoDanhGiaDlg(); 
	int OnCancelHMSPhacDoDanhGiaDlg(); 
	int OnHMSPhacDoDanhGiaDlgListLoadData(); 
	CString GetNameSelect(CString szTable, CString szKey);
	void LoadDrugList();
};
#endif
