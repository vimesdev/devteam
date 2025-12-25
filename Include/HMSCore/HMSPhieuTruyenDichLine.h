#ifndef HMSPHIEUTRUYENDICHLINE_H
#define HMSPHIEUTRUYENDICHLINE_H

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
class CHMSPhieuTruyenDichLine : public CGuiDialog{
protected:
public:
	CWnd*			m_pWndOrder;
	CGuiGroupBox	m_wndInsfutionInformation;
	CGuiLabel		m_wndResultLabel;
	CGuiNumberCtrl	m_wndResult;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndVolumnLabel;
	CGuiNumberCtrl	m_wndVolumn;
	CGuiLabel		m_wndSpeedLabel;
	CGuiNumberCtrl	m_wndSpeed;
	CGuiComboBox	m_wndSpeedUnit;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndNurseLabel;
	CGuiComboBox	m_wndNurse;
	CGuiCheckBox	m_wndStop;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndNoteLable;
	CGuiTextCtrl	m_wndNote;
	float	m_nResult;
	CString	m_szTypeKey;
	float	m_nVolumn;
	float	m_nSpeed;
	CString	m_szSpeedUnitKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szDoctorKey;
	CString	m_szNurseKey;
	BOOL	m_bStop;
	long	m_nInfutionID;
	long	m_nID;
	CString m_szNurseID;
	int		m_nTotalVolume;
	BOOL	m_bIsSave;
	int m_nMode;
	CString	m_szNote;
	CDbfMap m_hms_pharma_infusion_adjTbl;
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnVolumnChange(); 
	//void			OnVolumnSetfocus(); 
	//void			OnVolumnKillfocus(); 
	int			OnVolumnCheckValue(); 
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	void			OnSpeedUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSpeedUnitSelendok(); 
	//void			OnSpeedUnitSetfocus(); 
	//void			OnSpeedUnitKillfocus(); 
	long			OnSpeedUnitLoadData(); 
	//void			OnSpeedUnitAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
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
	void			OnStopSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			OnTinhToanThoiGianTruyen();
		//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	CHMSPhieuTruyenDichLine(CWnd *pParent,int nMode);
	~CHMSPhieuTruyenDichLine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhieuTruyenDichLine(); 
	int OnEditHMSPhieuTruyenDichLine(); 
	int OnDeleteHMSPhieuTruyenDichLine(); 
	int OnSaveHMSPhieuTruyenDichLine(); 
	int OnCancelHMSPhieuTruyenDichLine(); 
	int OnHMSPhieuTruyenDichLineListLoadData(); 
};
#endif
