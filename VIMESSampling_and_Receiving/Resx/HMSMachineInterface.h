#ifndef HMSMACHINEINTERFACE_H
#define HMSMACHINEINTERFACE_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
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
class CHMSMachineInterface : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndPortConnectLabel;
	CGuiTextCtrl	m_wndPortConnect;
	CGuiLabel		m_wndTestTypeLabel;
	CGuiComboBox	m_wndTestType;
	CGuiLabel		m_wndBarcodeLabel;
	CGuiTextCtrl	m_wndBarcode;
	CGuiLabel		m_wndSendTypeLabel;
	CGuiNumberCtrl	m_wndSendType;
	CGuiLabel		m_wndHeaderRecordLabel;
	CGuiTextCtrl	m_wndHeaderRecord;
	CGuiLabel		m_wndPatientRecordLabel;
	CGuiTextCtrl	m_wndPatientRecord;
	CGuiLabel		m_wndOrderRecordLabel;
	CGuiTextCtrl	m_wndOrderRecord;
	CGuiTextCtrl	m_wndExtendedResultRecord;
	CGuiLabel		m_wndResultRecordLabel;
	CGuiTextCtrl	m_wndResultRecord;
	CGuiLabel		m_wndCommentRecordLabel;
	CGuiTextCtrl	m_wndCommentRecord;
	CGuiLabel		m_wndTrailerRecordLabel;
	CGuiTextCtrl	m_wndTrailerRecord;
	CGuiLabel		m_wndFieldsSeperatorLabel;
	CGuiTextCtrl	m_wndFieldsSeperator;
	CGuiLabel		m_wndOptionComponentSeperatorLabel;
	CGuiTextCtrl	m_wndOptionComponentSeperator;
	CGuiLabel		m_wndUnuseRecordLabel;
	CGuiTextCtrl	m_wndUnuseRecord;
	CGuiCheckBox	m_wndActive;
	CGuiLabel		m_wndExtendedResultRecordLabel;
	long	m_nIndex;
	CString	m_szDescription;
	CString	m_szPortConnect;
	CString	m_szTestTypeKey;
	CString	m_szBarcode;
	long	m_nSendType;
	CString	m_szHeaderRecord;
	CString	m_szPatientRecord;
	CString	m_szOrderRecord;
	CString	m_szExtendedResultRecord;
	CString	m_szResultRecord;
	CString	m_szCommentRecord;
	CString	m_szTrailerRecord;
	CString	m_szFieldsSeperator;
	CString	m_szOptionComponentSeperator;
	CString	m_szUnuseRecord;
	BOOL	m_bActive;
	CDbfMap	m_hms_machine_interfaceTbl;
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnPortConnectChange(); 
	//void			OnPortConnectSetfocus(); 
	//void			OnPortConnectKillfocus(); 
	int			OnPortConnectCheckValue(); 
	void			OnTestTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestTypeSelendok(); 
	//void			OnTestTypeSetfocus(); 
	//void			OnTestTypeKillfocus(); 
	long			OnTestTypeLoadData(); 
	void			OnTestTypeAddNew(); 
	//void			OnBarcodeChange(); 
	//void			OnBarcodeSetfocus(); 
	//void			OnBarcodeKillfocus(); 
	int			OnBarcodeCheckValue(); 
	//void			OnSendTypeChange(); 
	//void			OnSendTypeSetfocus(); 
	//void			OnSendTypeKillfocus(); 
	int			OnSendTypeCheckValue(); 
	//void			OnHeaderRecordChange(); 
	//void			OnHeaderRecordSetfocus(); 
	//void			OnHeaderRecordKillfocus(); 
	int			OnHeaderRecordCheckValue(); 
	//void			OnPatientRecordChange(); 
	//void			OnPatientRecordSetfocus(); 
	//void			OnPatientRecordKillfocus(); 
	int			OnPatientRecordCheckValue(); 
	//void			OnOrderRecordChange(); 
	//void			OnOrderRecordSetfocus(); 
	//void			OnOrderRecordKillfocus(); 
	int			OnOrderRecordCheckValue(); 
	//void			OnExtendedResultRecordChange(); 
	//void			OnExtendedResultRecordSetfocus(); 
	//void			OnExtendedResultRecordKillfocus(); 
	int			OnExtendedResultRecordCheckValue(); 
	//void			OnResultRecordChange(); 
	//void			OnResultRecordSetfocus(); 
	//void			OnResultRecordKillfocus(); 
	int			OnResultRecordCheckValue(); 
	//void			OnCommentRecordChange(); 
	//void			OnCommentRecordSetfocus(); 
	//void			OnCommentRecordKillfocus(); 
	int			OnCommentRecordCheckValue(); 
	//void			OnTrailerRecordChange(); 
	//void			OnTrailerRecordSetfocus(); 
	//void			OnTrailerRecordKillfocus(); 
	int			OnTrailerRecordCheckValue(); 
	//void			OnFieldsSeperatorChange(); 
	//void			OnFieldsSeperatorSetfocus(); 
	//void			OnFieldsSeperatorKillfocus(); 
	int			OnFieldsSeperatorCheckValue(); 
	//void			OnOptionComponentSeperatorChange(); 
	//void			OnOptionComponentSeperatorSetfocus(); 
	//void			OnOptionComponentSeperatorKillfocus(); 
	int			OnOptionComponentSeperatorCheckValue(); 
	//void			OnUnuseRecordChange(); 
	//void			OnUnuseRecordSetfocus(); 
	//void			OnUnuseRecordKillfocus(); 
	int			OnUnuseRecordCheckValue(); 
	void			OnActiveSelect(); 
	CHMSMachineInterface();
	~CHMSMachineInterface();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMachineInterface(); 
	int OnEditHMSMachineInterface(); 
	int OnDeleteHMSMachineInterface(); 
	int OnSaveHMSMachineInterface(); 
	int OnCancelHMSMachineInterface(); 
	int OnHMSMachineInterfaceListLoadData(); 
};
#endif
