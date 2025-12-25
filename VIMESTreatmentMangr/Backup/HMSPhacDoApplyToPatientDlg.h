#ifndef HMSPHACDOAPPLYTOPATIENTDLG_H
#define HMSPHACDOAPPLYTOPATIENTDLG_H

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
class  CHMSPhacDoApplyToPatientDlg : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndPhacDoInFor;
	CGuiGroupBox	m_wndThongTinApdung;
	CGuiGroupBox	m_wndPhacDoApplyInfor;
	CGuiLabel		m_wndICD10Label;
	CGuiComboBox	m_wndICD10;
	CGuiLabel		m_wndPhacDoLabel;
	CGuiComboBox	m_wndPhacDo;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndUsePhacDo;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndHuongXuTriLabel;
	CGuiTextCtrl	m_wndHuongXuTri;
	CGuiLabel		m_wndCheDoAnLabel;
	CGuiComboBox	m_wndCheDoAn;
	CGuiLabel		m_wndCheDoChamSocLabel;
	CGuiTextCtrl	m_wndCheDoChamSoc;
	CGuiLabel		m_wndTreatDayLabel;
	CGuiComboBox	m_wndTreatDay;
	CGuiCheckBox	m_wndAddExamSheet;
	CGuiLabel		m_wndTimeLabel;
	CGuiDateTimeCtrl	m_wndTime;
	CGuiListCtrl	m_wndApplyList;
	CGuiButton		m_wndEvaluation;
	CString	m_szICD10Key;
	CString	m_szPhacDoKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szNote;
	CString	m_szHuongXuTri;
	CString	m_szCheDoAnKey;
	CString	m_szCheDoChamSoc;
	CString	m_szTreatDayKey;
	BOOL	m_bAddExamSheet;
	CString	m_szTime;
	long	m_nDocNo;
	long	m_nTreatIdx;
	long	m_nPhacDoApplyID;
	long	m_nTreatDay_ID;
	CString m_szOrderDate;
	CDbfMap	m_hms_phacdo_apply;
	CDbfMap	m_hms_phacdo_apply_date;
	CDbfMap	m_hms_ipharmaorderTbl;
	void			OnICD10SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICD10Selendok(); 
	//void			OnICD10Setfocus(); 
	//void			OnICD10Killfocus(); 
	long			OnICD10LoadData(); 
	//void			OnICD10AddNew(); 
	void			OnPhacDoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhacDoSelendok(); 
	//void			OnPhacDoSetfocus(); 
	//void			OnPhacDoKillfocus(); 
	long			OnPhacDoLoadData(); 
	//void			OnPhacDoAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnUsePhacDoSelect(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnHuongXuTriChange(); 
	//void			OnHuongXuTriSetfocus(); 
	//void			OnHuongXuTriKillfocus(); 
	int			OnHuongXuTriCheckValue(); 
	void			OnCheDoAnSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCheDoAnSelendok(); 
	//void			OnCheDoAnSetfocus(); 
	//void			OnCheDoAnKillfocus(); 
	long			OnCheDoAnLoadData(); 
	//void			OnCheDoAnAddNew(); 
	//void			OnCheDoChamSocChange(); 
	//void			OnCheDoChamSocSetfocus(); 
	//void			OnCheDoChamSocKillfocus(); 
	int			OnCheDoChamSocCheckValue(); 
	void			OnTreatDaySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTreatDaySelendok(); 
	//void			OnTreatDaySetfocus(); 
	//void			OnTreatDayKillfocus(); 
	long			OnTreatDayLoadData(); 
	//void			OnTreatDayAddNew(); 
	void			OnAddExamSheetSelect(); 
	//void			OnTimeChange(); 
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	int			OnTimeCheckValue(); 
	long			OnApplyListLoadData(); 
	void			OnApplyListSelectChange(int nOldItem, int nNewItem); 
	void			OnApplyListDblClick(); 
	int			OnApplyListDeleteItem(); 
	void			OnEvaluationSelect(); 
	CHMSPhacDoApplyToPatientDlg(CWnd *pParent);
	~CHMSPhacDoApplyToPatientDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoApplyToPatientDlg(); 
	int OnEditHMSPhacDoApplyToPatientDlg(); 
	int OnDeleteHMSPhacDoApplyToPatientDlg(); 
	int OnSaveHMSPhacDoApplyToPatientDlg(); 
	int OnCancelHMSPhacDoApplyToPatientDlg(); 
	int OnHMSPhacDoApplyToPatientDlgListLoadData(); 
};
#endif
