#ifndef HMSCANCERTREATDIAGRAMLINEDLG_H
#define HMSCANCERTREATDIAGRAMLINEDLG_H

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
class CHMSCancerTreatDiagramLineDlg : public CGuiDialog{
protected:
public:
	CWnd*	m_pParent;
	CString	m_szOrderID;
	long	m_nOrderLineID;

	CGuiGroupBox	m_wndDiagramDetail;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndUOMIDLabel;
	CGuiTextCtrl	m_wndUOMID;
	CGuiLabel		m_wndLDMLabel;
	CGuiNumberCtrl	m_wndLDM;
	CGuiLabel		m_wndDungMoiLabel;
	CGuiTextCtrl	m_wndDungMoi;
	CGuiLabel		m_wndTheTichLabel;
	CGuiNumberCtrl	m_wndTheTich;
	CGuiLabel		m_wndThoiGianSDLabel;
	CGuiNumberCtrl	m_wndThoiGianSD;
	CGuiLabel		m_wndReferenceLabel;
	CGuiComboBox	m_wndReference;
	CGuiLabel		m_wndReference2Label;
	CGuiComboBox	m_wndReference2;
	CGuiLabel		m_wndReference3Label;
	CGuiComboBox	m_wndReference3;
	CGuiLabel		m_wndReference4Label;
	CGuiComboBox	m_wndReference4;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szDrugName;
	CString	m_szUOMID;
	long	m_nLDM;
	CString	m_szDungMoi;
	long	m_nTheTich;
	long	m_nThoiGianSD;

	CString	m_szReferenceKey;
	CString	m_szReference2Key;
	CString	m_szReference3Key;
	CString	m_szReference4Key;

	CDbfMap m_hms_cancer_diaglnTbl;
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnUOMIDChange(); 
	//void			OnUOMIDSetfocus(); 
	//void			OnUOMIDKillfocus(); 
	int			OnUOMIDCheckValue(); 
	//void			OnLDMChange(); 
	//void			OnLDMSetfocus(); 
	//void			OnLDMKillfocus(); 
	int			OnLDMCheckValue(); 
	//void			OnDungMoiChange(); 
	//void			OnDungMoiSetfocus(); 
	//void			OnDungMoiKillfocus(); 
	int			OnDungMoiCheckValue(); 
	//void			OnTheTichChange(); 
	//void			OnTheTichSetfocus(); 
	//void			OnTheTichKillfocus(); 
	int			OnTheTichCheckValue(); 
	//void			OnThoiGianSDChange(); 
	//void			OnThoiGianSDSetfocus(); 
	//void			OnThoiGianSDKillfocus(); 
	int			OnThoiGianSDCheckValue(); 
	void			OnReferenceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReferenceSelendok(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	long			OnReferenceLoadData(); 
	//void			OnReferenceAddNew(); 
	void			OnReference2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReference2Selendok(); 
	//void			OnReference2Setfocus(); 
	//void			OnReference2Killfocus(); 
	long			OnReference2LoadData(); 
	//void			OnReference2AddNew(); 
	void			OnReference3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReference3Selendok(); 
	//void			OnReference3Setfocus(); 
	//void			OnReference3Killfocus(); 
	long			OnReference3LoadData(); 
	//void			OnReference3AddNew(); 
	void			OnReference4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReference4Selendok(); 
	//void			OnReference4Setfocus(); 
	//void			OnReference4Killfocus(); 
	long			OnReference4LoadData(); 
	//void			OnReference4AddNew(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSCancerTreatDiagramLineDlg(CWnd *pParent);
	~CHMSCancerTreatDiagramLineDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerTreatDiagramLineDlg(); 
	int OnEditHMSCancerTreatDiagramLineDlg(); 
	int OnDeleteHMSCancerTreatDiagramLineDlg(); 
	int OnSaveHMSCancerTreatDiagramLineDlg(); 
	int OnCancelHMSCancerTreatDiagramLineDlg(); 
	int OnHMSCancerTreatDiagramLineDlgListLoadData(); 
};
#endif
