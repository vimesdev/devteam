#ifndef HMSINSTRUMENTPROTOCOL_H
#define HMSINSTRUMENTPROTOCOL_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSInstrumentProtocol : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInstrumentInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndFileHeaderLabel;
	CGuiTextCtrl	m_wndFileHeader;
	CGuiLabel		m_wndFileEndLabel;
	CGuiTextCtrl	m_wndFileEnd;
	CGuiLabel		m_wndHeaderRecordLabel;
	CGuiTextCtrl	m_wndHeaderRecord;
	CGuiLabel		m_wndEndOfRecordLabel;
	CGuiTextCtrl	m_wndEndOfRecord;
	CGuiLabel		m_wndOrderRecordLabel;
	CGuiTextCtrl	m_wndOrderRecord;
	CGuiLabel		m_wndOrderRecordMapLabel;
	CGuiTextCtrl	m_wndOrderRecordMap;
	CGuiLabel		m_wndResultRecordLabel;
	CGuiTextCtrl	m_wndResultRecord;
	CGuiLabel		m_wndResultRecordMapLabel;
	CGuiTextCtrl	m_wndResultRecordMap;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szID;
	CString	m_szName;
	CString	m_szNote;
	CString	m_szFileHeader;
	CString	m_szFileEnd;
	CString	m_szHeaderRecord;
	CString	m_szEndOfRecord;
	CString	m_szOrderRecord;
	CString	m_szOrderRecordMap;
	CString	m_szResultRecord;
	CString	m_szResultRecordMap;
	CDbfMap	m_hms_instrument_protocolTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnFileHeaderChange(); 
	//void			OnFileHeaderSetfocus(); 
	//void			OnFileHeaderKillfocus(); 
	int			OnFileHeaderCheckValue(); 
	//void			OnFileEndChange(); 
	//void			OnFileEndSetfocus(); 
	//void			OnFileEndKillfocus(); 
	int			OnFileEndCheckValue(); 
	//void			OnHeaderRecordChange(); 
	//void			OnHeaderRecordSetfocus(); 
	//void			OnHeaderRecordKillfocus(); 
	int			OnHeaderRecordCheckValue(); 
	//void			OnEndOfRecordChange(); 
	//void			OnEndOfRecordSetfocus(); 
	//void			OnEndOfRecordKillfocus(); 
	int			OnEndOfRecordCheckValue(); 
	//void			OnOrderRecordChange(); 
	//void			OnOrderRecordSetfocus(); 
	//void			OnOrderRecordKillfocus(); 
	int			OnOrderRecordCheckValue(); 
	//void			OnOrderRecordMapChange(); 
	//void			OnOrderRecordMapSetfocus(); 
	//void			OnOrderRecordMapKillfocus(); 
	int			OnOrderRecordMapCheckValue(); 
	//void			OnResultRecordChange(); 
	//void			OnResultRecordSetfocus(); 
	//void			OnResultRecordKillfocus(); 
	int			OnResultRecordCheckValue(); 
	//void			OnResultRecordMapChange(); 
	//void			OnResultRecordMapSetfocus(); 
	//void			OnResultRecordMapKillfocus(); 
	int			OnResultRecordMapCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSInstrumentProtocol();
	~CHMSInstrumentProtocol();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInstrumentProtocol(); 
	int OnEditHMSInstrumentProtocol(); 
	int OnDeleteHMSInstrumentProtocol(); 
	int OnSaveHMSInstrumentProtocol(); 
	int OnCancelHMSInstrumentProtocol(); 
	int OnHMSInstrumentProtocolListLoadData(); 
};
#endif
