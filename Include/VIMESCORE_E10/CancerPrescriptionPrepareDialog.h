#ifndef HMSCancerPrescriptionPrepareDIALOG_H
#define HMSCancerPrescriptionPrepareDIALOG_H

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
class CHMSCancerPrescriptionPrepareDialog : public CGuiDialog{
protected:
public:
	long			m_nOID;
	long			m_nOrderId;
	long			m_nDocumentNo;
	long			m_nTreatIdx;	
	long			m_nOrderline_ID;
	bool			m_bLocked;

	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndCycleLabel;
	CGuiTextCtrl	m_wndCycle;
	CGuiLabel		m_wndCycleDateLabel;
	CGuiNumberCtrl	m_wndCycleDate;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndTreatDiagramLabel;
	CGuiComboBox	m_wndTreatDiagram;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiLabel		m_wndSBACalcMethodLabel;
	CGuiLabel		m_wndGFRLabel;
	CGuiNumberCtrl	m_wndGFR;
	CGuiComboBox	m_wndSBACalcMethod;
	CGuiLabel		m_wndSBALabel;
	CGuiNumberCtrl	m_wndSBA;
	CGuiLabel		m_wndUACLabel;
	CGuiNumberCtrl	m_wndUAC;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	
	CGuiButton		m_wndAddLine;
	CString	m_szDoctorKey;
	CString	m_szCycle;
	int		m_nCycleDate;
	CString	m_szOrderDate;
	long	m_nWeight;
	long	m_nHeight;
	float	m_nGFR;
	CString	m_szSBACalcMethodKey;
	float	m_nSBA;
	float	m_nUAC;
	CString	m_szDiagnostic;
	CString	m_szTreatDiagramKey;
	CString	m_szNote;
	CString m_szStatus;
	CDbfMap	m_hms_cancer_orderTbl;
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	//void			OnCycleChange(); 
	//void			OnCycleSetfocus(); 
	//void			OnCycleKillfocus(); 
	int			OnCycleCheckValue(); 
	//void			OnCycleDateChange(); 
	//void			OnCycleDateSetfocus(); 
	//void			OnCycleDateKillfocus(); 
	int			OnCycleDateCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	void			OnTreatDiagramSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTreatDiagramSelendok(); 
	//void			OnTreatDiagramSetfocus(); 
	//void			OnTreatDiagramKillfocus(); 
	long			OnTreatDiagramLoadData(); 
	//void			OnTreatDiagramAddNew(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	//void			OnGFRChange(); 
	//void			OnGFRSetfocus(); 
	//void			OnGFRKillfocus(); 
	int			OnGFRCheckValue(); 
	void			OnSBACalcMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSBACalcMethodSelendok(); 
	//void			OnSBACalcMethodSetfocus(); 
	//void			OnSBACalcMethodKillfocus(); 
	long			OnSBACalcMethodLoadData(); 
	//void			OnSBACalcMethodAddNew(); 
	//void			OnSBAChange(); 
	//void			OnSBASetfocus(); 
	//void			OnSBAKillfocus(); 
	int			OnSBACheckValue(); 
	//void			OnUACChange(); 
	//void			OnUACSetfocus(); 
	//void			OnUACKillfocus(); 
	int			OnUACCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem();
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnSendSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	
	void			InDonhoatrilieu();
	void			OnAddLineSelect(); 

	CHMSCancerPrescriptionPrepareDialog(CWnd *pParent, int nMode);
	~CHMSCancerPrescriptionPrepareDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerPrescriptionPrepareDialog(); 
	int OnEditHMSCancerPrescriptionPrepareDialog(); 
	int OnDeleteHMSCancerPrescriptionPrepareDialog(); 
	int OnSaveHMSCancerPrescriptionPrepareDialog(); 
	int OnCancelHMSCancerPrescriptionPrepareDialog(); 
	int OnHMSCancerPrescriptionPrepareDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);

};
#endif
