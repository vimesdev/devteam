#ifndef HMSPRINTGIAYCHUNGNHANPT_H
#define HMSPRINTGIAYCHUNGNHANPT_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSPrintGiaychungnhanPT : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateTimeCtrl	m_wndDischargeDate;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndPefromDateLabel;
	CGuiDateTimeCtrl	m_wndPefromDate;
	CGuiLabel		m_wndOperationNameLabel;
	CGuiTextCtrl	m_wndOperationName;
	CGuiLabel		m_wndPPPhauthuatLabel;
	CGuiTextCtrl	m_wndPPPhauthuat;
	CGuiLabel		m_wndPPVocamLabel;
	CGuiTextCtrl	m_wndPPVocam;
	CGuiLabel		m_wndNguoiPTLabel;
	CGuiTextCtrl	m_wndNguoiPT;
	CGuiLabel		m_wndTinhTrangLabel;
	CGuiTextCtrl	m_wndTinhTrang;
	CGuiLabel		m_wndNhomMauLabel;
	CGuiTextCtrl	m_wndNhomMau;
	CGuiLabel		m_wndYeuToRHLabel;
	CGuiTextCtrl	m_wndYeuToRH;
	CGuiLabel		m_wndKetQuaGPBLabel;
	CGuiTextCtrl	m_wndKetQuaGPB;
	CGuiLabel		m_wndTencuaso;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szAdmitDate;
	CString	m_szDischargeDate;
	CString	m_szRecordNo;
	CString	m_szDiagnostic;
	CString	m_szPefromDate;
	CString	m_szOperationName;
	CString	m_szPPPhauthuat;
	CString	m_szPPVocam;
	CString	m_szNguoiPT;
	CString	m_szTinhTrang;
	CString	m_szNhomMau;
	CString	m_szYeuToRH;
	CString	m_szKetQuaGPB;
	long	m_nOrderID;

	CDbfMap	m_hms_giaychungnhanphauthuatTbl;
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnPefromDateChange(); 
	//void			OnPefromDateSetfocus(); 
	//void			OnPefromDateKillfocus(); 
	int			OnPefromDateCheckValue(); 
	//void			OnOperationNameChange(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	int			OnOperationNameCheckValue(); 
	//void			OnPPPhauthuatChange(); 
	//void			OnPPPhauthuatSetfocus(); 
	//void			OnPPPhauthuatKillfocus(); 
	int			OnPPPhauthuatCheckValue(); 
	//void			OnPPVocamChange(); 
	//void			OnPPVocamSetfocus(); 
	//void			OnPPVocamKillfocus(); 
	int			OnPPVocamCheckValue(); 
	//void			OnNguoiPTChange(); 
	//void			OnNguoiPTSetfocus(); 
	//void			OnNguoiPTKillfocus(); 
	int			OnNguoiPTCheckValue(); 
	//void			OnTinhTrangChange(); 
	//void			OnTinhTrangSetfocus(); 
	//void			OnTinhTrangKillfocus(); 
	int			OnTinhTrangCheckValue(); 
	//void			OnNhomMauChange(); 
	//void			OnNhomMauSetfocus(); 
	//void			OnNhomMauKillfocus(); 
	int			OnNhomMauCheckValue(); 
	//void			OnYeuToRHChange(); 
	//void			OnYeuToRHSetfocus(); 
	//void			OnYeuToRHKillfocus(); 
	int			OnYeuToRHCheckValue(); 
	//void			OnKetQuaGPBChange(); 
	//void			OnKetQuaGPBSetfocus(); 
	//void			OnKetQuaGPBKillfocus(); 
	int			OnKetQuaGPBCheckValue(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSPrintGiaychungnhanPT(CWnd *pParent);
	~CHMSPrintGiaychungnhanPT();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrintGiaychungnhanPT(); 
	int OnEditHMSPrintGiaychungnhanPT(); 
	int OnDeleteHMSPrintGiaychungnhanPT(); 
	int OnSaveHMSPrintGiaychungnhanPT(); 
	int OnCancelHMSPrintGiaychungnhanPT(); 
	int OnHMSPrintGiaychungnhanPTListLoadData(); 
};
#endif
