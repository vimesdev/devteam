#ifndef HMSBEDTRACKINGCHANGEDIALOG_H
#define HMSBEDTRACKINGCHANGEDIALOG_H

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
class CHMSBedTrackingChangeDialog : public CGuiDialog{
protected:
	bool	m_bMove;
	long	m_nBedIdx;
	long	m_nRefIdx;
	int		m_nRoomID;
public:
	long	m_nDocumentNo;

	CGuiLabel		m_wndCurrentRoomLabel;
	CGuiGroupBox	m_wndBedInformation;
	CGuiTextCtrl	m_wndCurrentRoom;
	CGuiLabel		m_wndCurrentBedLabel;
	CGuiTextCtrl	m_wndCurrentBed;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndTreatNumberLabel;
	CGuiNumberCtrl	m_wndTreatNumber;
	CGuiLabel		m_wndNewRoomLabel;
	CGuiComboBox	m_wndNewRoom;
	CGuiLabel		m_wndNewBedLabel;
	CGuiComboBox	m_wndNewBed;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndNurseLabel;
	CGuiComboBox	m_wndNurse;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szCurrentRoom;
	CString	m_szCurrentBed;
	CString	m_szAdmitDate;
	CString	m_szEndDate;
	long	m_nTreatNumber;
	CString	m_szNewRoomKey;
	CString	m_szNewBedKey;
	CString	m_szDoctorKey;
	CString	m_szNurseKey;
	//void			OnCurrentRoomChange(); 
	//void			OnCurrentRoomSetfocus(); 
	//void			OnCurrentRoomKillfocus(); 
	int			OnCurrentRoomCheckValue(); 
	//void			OnCurrentBedChange(); 
	//void			OnCurrentBedSetfocus(); 
	//void			OnCurrentBedKillfocus(); 
	int			OnCurrentBedCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnTreatNumberChange(); 
	//void			OnTreatNumberSetfocus(); 
	//void			OnTreatNumberKillfocus(); 
	int			OnTreatNumberCheckValue(); 
	void			OnNewRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNewRoomSelendok(); 
	//void			OnNewRoomSetfocus(); 
	//void			OnNewRoomKillfocus(); 
	long			OnNewRoomLoadData(); 
	//void			OnNewRoomAddNew(); 
	void			OnNewBedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNewBedSelendok(); 
	//void			OnNewBedSetfocus(); 
	//void			OnNewBedKillfocus(); 
	long			OnNewBedLoadData(); 
	//void			OnNewBedAddNew(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	void			OnNurseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurseSelendok(); 
	//void			OnNurseSetfocus(); 
	//void			OnNurseKillfocus(); 
	long			OnNurseLoadData(); 
	//void			OnNurseAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSBedTrackingChangeDialog(CWnd *pParent, long nBedIdx,  bool bMove);
	~CHMSBedTrackingChangeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBedTrackingChangeDialog(); 
	int OnEditHMSBedTrackingChangeDialog(); 
	int OnDeleteHMSBedTrackingChangeDialog(); 
	int OnSaveHMSBedTrackingChangeDialog(); 
	int OnCancelHMSBedTrackingChangeDialog(); 
	int OnHMSBedTrackingChangeDialogListLoadData(); 
};
#endif
