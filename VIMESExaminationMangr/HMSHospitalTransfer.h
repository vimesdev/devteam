#ifndef HMSHOSPITALTRANSFER_H
#define HMSHOSPITALTRANSFER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may HospitalLine in severe civil and criminal penalties, 
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
class CHMSHospitalTransfer : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndHospitalTransferInformation;
	CGuiLabel		m_wndICD10Label;
	CGuiComboBox	m_wndICD10;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndHospitalNameLabel;
	CGuiComboBox	m_wndHospitalName;
	CGuiLabel		m_wndOutDateLabel;
	CGuiDateTimeCtrl	m_wndOutDate;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndClinicalSymbolLabel;
	CGuiTextCtrl	m_wndClinicalSymbol;
	CGuiLabel		m_wndTestsLabel;
	CGuiTextCtrl	m_wndTests;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndMedicineUsedLabel;
	CGuiTextCtrl	m_wndMedicineUsed;
	CGuiLabel		m_wndHospitalLineLabel;
	CGuiComboBox	m_wndHospitalLine;
	CGuiLabel		m_wndPatientStateLabel;
	CGuiTextCtrl	m_wndPatientState;
	CGuiLabel		m_wndTransferDateLabel;
	CGuiDateTimeCtrl	m_wndTransferDate;
	CGuiLabel		m_wndReasonLabel;
	CGuiComboBox	m_wndReason;
	CGuiLabel		m_wndTransportLabel;
	CGuiComboBox	m_wndTransport;
	CGuiLabel		m_wndAttenderLabel;
	CGuiTextCtrl	m_wndAttender;
	CGuiLabel		m_wndHuongDieuTriLabel;
	CGuiTextCtrl	m_wndHuongDieuTri;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndEntertainTreat;
	CGuiCheckBox	m_wndone_year_apply;

	CString	m_szICD10Key;
	CString	m_szConclusion;
	CString	m_szHospitalNameKey;
	CString	m_szOutDate;
	CString	m_szClinicalSymbol;
	CString	m_szTests;
	CString	m_szMainDisease;
	CString	m_szMedicineUsed;
	CString	m_szHospitalLineKey;
	CString	m_szPatientState;
	CString	m_szTransferDate;
	CString	m_szReason;
	CString	m_szTransportKey;
	CString	m_szAttenderKey;
	CString	m_szHuongDieuTri;
	BOOL	m_bEntertainTreat;
	BOOL	m_bNoRePrint;
	
	CString	m_szResultKey;
	CString m_szReasonKey;
	long m_nNumberTrans;
	long m_nExamNumber;
	BOOL	m_bone_year_apply;
	
	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_htdocTbl;

	void			OnICD10SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICD10Selendok(); 
	//void			OnICD10Setfocus(); 
	//void			OnICD10Killfocus(); 
	long			OnICD10LoadData(); 
	void			OnICD10AddNew(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnHospitalNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHospitalNameSelendok(); 
	//void			OnHospitalNameSetfocus(); 
	//void			OnHospitalNameKillfocus(); 
	long			OnHospitalNameLoadData(); 
	void			OnHospitalNameAddNew(); 
	//void			OnOutDateChange(); 
	//void			OnOutDateSetfocus(); 
	//void			OnOutDateKillfocus(); 
	int			OnOutDateCheckValue(); 
	//void			OnClinicalSymbolChange(); 
	//void			OnClinicalSymbolSetfocus(); 
	//void			OnClinicalSymbolKillfocus(); 
	int			OnClinicalSymbolCheckValue(); 
	//void			OnTestsChange(); 
	//void			OnTestsSetfocus(); 
	//void			OnTestsKillfocus(); 
	int			OnTestsCheckValue(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnMedicineUsedChange(); 
	//void			OnMedicineUsedSetfocus(); 
	//void			OnMedicineUsedKillfocus(); 
	int			OnMedicineUsedCheckValue(); 
	void			OnHospitalLineSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHospitalLineSelendok(); 
	//void			OnHospitalLineSetfocus(); 
	//void			OnHospitalLineKillfocus(); 
	long			OnHospitalLineLoadData(); 
	void			OnHospitalLineAddNew(); 

	//void			OnPatientStateChange(); 
	//void			OnPatientStateSetfocus(); 
	//void			OnPatientStateKillfocus(); 
	int			OnPatientStateCheckValue(); 
	//void			OnTransferDateChange(); 
	//void			OnTransferDateSetfocus(); 
	//void			OnTransferDateKillfocus(); 
	int			OnTransferDateCheckValue(); 
	long			OnResultLoadData(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	long			OnReasonLoadData(); 
	void			OnTransportSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransportSelendok(); 
	//void			OnTransportSetfocus(); 
	//void			OnTransportKillfocus(); 
	long			OnTransportLoadData(); 
	void			OnTransportAddNew(); 
	//void			OnAttenderSetfocus(); 
	//void			OnAttenderKillfocus(); 
	//void			OnHuongDieuTriChange(); 
	//void			OnHuongDieuTriSetfocus(); 
	//void			OnHuongDieuTriKillfocus(); 
	int			OnHuongDieuTriCheckValue(); 
	void			OnEntertainTreatSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSHospitalTransfer();
	CHMSHospitalTransfer(CWnd *pParent);
	~CHMSHospitalTransfer();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSHospitalTransfer(); 
	int OnEditHMSHospitalTransfer(); 
	int OnDeleteHMSHospitalTransfer(); 
	int OnSaveHMSHospitalTransfer(); 
	int OnCancelHMSHospitalTransfer(); 
	int OnHMSHospitalTransferListLoadData();
	void			Onone_year_applySelect(); 
};
#endif