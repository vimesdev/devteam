#ifndef ASTMPROTOCOLDIALOG_H
#define ASTMPROTOCOLDIALOG_H

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
class CASTMProtocolDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSampleDataLabel;
	CGuiTextCtrl	m_wndSampleData;
	CGuiButton		m_wndBrowse;
	CGuiButton		m_wndParse;
	CGuiLabel		m_wndProtocoLabel;
	CGuiComboBox	m_wndProtocol;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndSeperatorLabel;
	CGuiTextCtrl	m_wndSeperator;
	CGuiLabel		m_wndHeaderRecordLabel;
	CGuiTextCtrl	m_wndHeaderRecord;
	CGuiLabel		m_wndPatientRecordLabel;
	CGuiTextCtrl	m_wndPatientRecord;
	CGuiLabel		m_wndOrderRecordLabel;
	CGuiTextCtrl	m_wndOrderRecord;
	CGuiLabel		m_wndResultRecordLabel;
	CGuiTextCtrl	m_wndResultRecord;
	CGuiLabel		m_wndQueryRecordLabel;
	CGuiTextCtrl	m_wndQueryRecord;
	CGuiLabel		m_wndTerminateLabel;
	CGuiTextCtrl	m_wndTerminateRecord;
	CGuiListCtrl	m_wndField;
	CGuiLabel		m_wndSpecimenID;
	CGuiLabel		m_wndPIDPatientID;
	CGuiLabel		m_wndSEQNOSequenceNo;
	CGuiLabel		m_wndRackNo;
	CGuiLabel		m_wndCUPNOCupNo;
	CGuiLabel		m_wndTESTIDTestID;
	CGuiLabel		m_wndCRLastFieldSentence;
	CGuiButton		m_wndSave;
	CString	m_szSampleData;
	CString	m_szProtocolKey;
	CString	m_szName;
	CString	m_szSeperator;
	CString	m_szHeaderRecord;
	CString	m_szPatientRecord;
	CString	m_szOrderRecord;
	CString	m_szResultRecord;
	CString	m_szQueryRecord;
	CString	m_szTerminateRecord;
	CString	m_szInitializeData;

	//void			OnSampleDataChange(); 
	//void			OnSampleDataSetfocus(); 
	//void			OnSampleDataKillfocus(); 
	int			OnSampleDataCheckValue(); 
	void			OnBrowseSelect(); 
	void			OnParseSelect(); 
	void			OnProtocolSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProtocolSelendok(); 
	//void			OnProtocolSetfocus(); 
	//void			OnProtocolKillfocus(); 
	long			OnProtocolLoadData(); 
	void			OnProtocolAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnSeperatorChange(); 
	//void			OnSeperatorSetfocus(); 
	//void			OnSeperatorKillfocus(); 
	int			OnSeperatorCheckValue(); 
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
	//void			OnResultRecordChange(); 
	//void			OnResultRecordSetfocus(); 
	//void			OnResultRecordKillfocus(); 
	int			OnResultRecordCheckValue(); 
	//void			OnQueryRecordChange(); 
	//void			OnQueryRecordSetfocus(); 
	//void			OnQueryRecordKillfocus(); 
	int			OnQueryRecordCheckValue(); 
	//void			OnTerminateRecordChange(); 
	//void			OnTerminateRecordSetfocus(); 
	//void			OnTerminateRecordKillfocus(); 
	int			OnTerminateRecordCheckValue(); 
	long			OnFieldLoadData(); 
	void			OnFieldSelectChange(int nOldItem, int nNewItem); 
	void			OnFieldDblClick(); 
	int			OnFieldDeleteItem(); 
	void			OnSaveSelect(); 
	CASTMProtocolDialog(CWnd *pParent);
	~CASTMProtocolDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddASTMProtocolDialog(); 
	int OnEditASTMProtocolDialog(); 
	int OnDeleteASTMProtocolDialog(); 
	int OnSaveASTMProtocolDialog(); 
	int OnCancelASTMProtocolDialog(); 
	int OnASTMProtocolDialogListLoadData(); 
};
#endif
