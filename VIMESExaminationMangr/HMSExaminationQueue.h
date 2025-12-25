#ifndef HMSEXAMINATIONQUEUE_H
#define HMSEXAMINATIONQUEUE_H

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
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#include "GuiView.h"
#include "DbField.h"
class CHMSExaminationQueueList : public CGuiView
{

protected:

public:
	long	m_nDefaultOffset;
	long	m_nDefaultLimit;
	int		m_nTotalPage;
	int		m_nCurPage;
	bool	m_bLoadPage;
	CGuiGroupBox	m_wndStatusGroupBox;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndPatientListGroupBox;
	CGuiCheckBox	m_wndOutPatient;
	CGuiCheckBox	m_wndReExam;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndExamined;
	CGuiRadioButton	m_wndTerminated;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTimeLabel;
	CGuiComboBox	m_wndTime;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndRefreh;
	CGuiListCtrl	m_wndPatientList;
	//CMFCGridCtrl	m_wndPatientList;
	CGuiNumberCtrl	m_wndNumber;
	CGuiCheckBox	m_wndNotPaid;
	CGuiCheckBox	m_wndCovid10;
	CGuiButton		m_wndZone;
	CGuiTextCtrl	m_wndCurrentZone;

	CGuiLabel		m_wndTongluotkhamlabel;
	CGuiNumberCtrl	m_wndn_total_Index;
	CGuiLabel		m_wndTongtienlabel;
	CGuiNumberCtrl	m_wndn_total_tongtien;
	CGuiLabel		m_wndTongtamguilabel;
	CGuiNumberCtrl	m_wndn_total_tongtamgui;
	CGuiLabel		m_wndTongtien_datt_label;
	CGuiNumberCtrl	m_wndn_total_tongtien_datt;
	CGuiLabel		m_wndTongtien_chuatt_label;
	CGuiNumberCtrl	m_wndn_total_tongtien_chuatt;
	CGuiLabel		m_wndSobenhnhanlabel;
	CGuiNumberCtrl	m_wndSobenhnhan;
	CGuiLabel		m_wndSubZoneLabel;
	CGuiComboBox	m_wndsubzone;

	CGuiLabel		m_wndDeptlabel;
	CGuiComboBox	m_wndDeptName;

	CGuiComboBox	m_wndPage;
	CGuiButton		m_wndNextPage;
	CGuiButton		m_wndLastPage;
	CGuiButton		m_wndPrevPage;
	CGuiButton		m_wndFirstPage;
	CGuiCheckBox	m_wndCancerPatient;
	int	m_nStatus;
	CString	m_szPrescriptionKey;
	CString	m_szCurrentZone;

	CString	m_szStatusKey;
	CString	m_szRoomKey;
	CString	m_szObjectKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTimeKey;
	BOOL	m_bOutPatient;
	long	m_nDocumentNo;
	long	m_nNumber;
	long	m_nRowSel;
	BOOL	m_bReExam;
	BOOL	m_bNotPaid;
	BOOL	m_bCovid10;
	CString	m_szPatientName;
	CString	m_szsubzoneKey;
	CString	m_szDeptNameKey;
	BOOL	m_bCancerPatient;
	void			OnReExamSelect();
	void			OnAllSelect();
	void			OnOpeningSelect();
	void			OnExaminedSelect();
	void			OnTerminatedSelect();
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnRoomSelendok();
	long			OnRoomLoadData();
	void			OnRoomAddNew();
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnObjectSelendok();
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData();
	void			OnObjectAddNew();
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue();
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue();
	void			OnTimeSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTimeSelendok();
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	long			OnTimeLoadData();
	void			OnTimeAddNew();
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int				OnDocumentNoCheckValue();
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue();
	void			OnRefrehSelect();
	long			OnPatientListLoadData();
	void			OnPatientListSelectChange(int nOldItem, int nNewItem);
	void			OnPatientListDblClick();
	void			OnCovid10Select();
	int			OnPatientListDeleteItem();
	int			OnRecaculateFeeListSelect();
	int			OnExportFeeListSelect();
	long			OnsubzoneLoadData();
	void			OnDeptNameSelendok();
	void			OnDeptNameRefresh(CString szCurrentZone);
	int				OnChangeZoneSelect();

	long	m_nSobenhnhan;
	long	m_nn_total_Index;
	double	m_nn_total_tongtien;
	double	m_nn_total_tongtamgui;
	double	m_nn_total_tongtien_datt;
	double	m_nn_total_tongtien_chuatt;

	int			Onn_total_IndexCheckValue();
	int			Onn_total_tongtienCheckValue();
	int			Onn_total_tongtamguiCheckValue();
	int			Onn_total_tongtien_dattCheckValue();
	int			Onn_total_tongtien_chuattCheckValue();
	int			OnCurrentZoneCheckValue();
	int			OnSobenhnhanCheckValue(); 

	CString	m_szPageKey;
	int	OnPageSelectChange(int nOldItem, int nNewItem);
	void	OnNextPageSelect();
	void	OnLastPageSelect();
	void	OnPrevPageSelect();
	void	OnFirstPageSelect();


	CHMSExaminationQueueList();
	~CHMSExaminationQueueList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationQueueList();
	int OnEditHMSExaminationQueueList();
	int OnDeleteHMSExaminationQueueList();
	int OnSaveHMSExaminationQueueList();
	int OnCancelHMSExaminationQueueList();
	int OnHMSExaminationQueueListListLoadData();
	void	OnResizeLayout();
	void OnOutPatientSelect();
	void			OnNotPaidSelect();
	void InVongDeoTay();
	int OnExportPatientListSelect();
	long			OnDeptNameLoadData();
	void			OnZoneSelect();

	void ShowPageControlBar(bool bShow);
	long OnPageLoadData();
	CString FormatOrderNumber(CString orderNumber);
	int				OnExamListCancelItem();
	void			OnCancerPatientSelect();
};
#endif