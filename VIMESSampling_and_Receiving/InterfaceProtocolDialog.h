#ifndef INTERFACEPROTOCOLDIALOG_H
#define INTERFACEPROTOCOLDIALOG_H

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
class CInterfaceProtocolDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndProtocolNameLabel;
	CGuiTextCtrl	m_wndProtocolName;
	CGuiButton		m_wndFindButton;
	CGuiLabel		m_wndProtocolTypeLabel;
	CGuiComboBox	m_wndProtocolType;
	CGuiRadioButton	m_wndQueryMode;
	CGuiRadioButton	m_wndDownloadMode;
	CGuiLabel		m_wndTimeOutLabel;
	CGuiNumberCtrl	m_wndTimeOut;
	CGuiLabel		m_wndBufferSizeLabel;
	CGuiNumberCtrl	m_wndBufferSize;
	CGuiLabel		m_wndFormatLabel;
	CGuiComboBox	m_wndFormat;
	CGuiLabel		m_wndSampleLabel;
	CGuiTextCtrl	m_wndSample;
	CGuiLabel		m_wndSeperatorLabel;
	CGuiTextCtrl	m_wndSeperator;
	CGuiListCtrl	m_wndFieldList;
	CGuiListCtrl	m_wndTestList;
	CGuiListCtrl	m_wndDescriptionList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndTest;
	CString	m_szProtocolName;
	CString	m_szProtocolTypeKey;
	int	m_nQueryMode;
	long	m_nTimeOut;
	long	m_nBufferSize;
	CString	m_szFormatKey;
	CString	m_szSample;
	CString	m_szSeperator;
	CStringArray m_Messages;
	CDbfMap	m_hms_instrument_protocolTbl;
	//void			OnProtocolNameChange(); 
	//void			OnProtocolNameSetfocus(); 
	//void			OnProtocolNameKillfocus(); 
	int			OnProtocolNameCheckValue(); 
	void			OnFindButtonSelect(); 
	void			OnProtocolTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProtocolTypeSelendok(); 
	//void			OnProtocolTypeSetfocus(); 
	//void			OnProtocolTypeKillfocus(); 
	long			OnProtocolTypeLoadData(); 
	void			OnProtocolTypeAddNew(); 
	void			OnQueryModeSelect(); 
	void			OnDownloadModeSelect(); 
	//void			OnTimeOutChange(); 
	//void			OnTimeOutSetfocus(); 
	//void			OnTimeOutKillfocus(); 
	int			OnTimeOutCheckValue(); 
	//void			OnBufferSizeChange(); 
	//void			OnBufferSizeSetfocus(); 
	//void			OnBufferSizeKillfocus(); 
	int			OnBufferSizeCheckValue(); 
	void			OnFormatSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFormatSelendok(); 
	//void			OnFormatSetfocus(); 
	//void			OnFormatKillfocus(); 
	long			OnFormatLoadData(); 
	void			OnFormatAddNew(); 
	//void			OnSampleChange(); 
	//void			OnSampleSetfocus(); 
	//void			OnSampleKillfocus(); 
	int			OnSampleCheckValue(); 
	//void			OnSeperatorChange(); 
	//void			OnSeperatorSetfocus(); 
	//void			OnSeperatorKillfocus(); 
	int			OnSeperatorCheckValue(); 
	long			OnFieldListLoadData(); 
	void			OnFieldListSelectChange(int nOldItem, int nNewItem); 
	void			OnFieldListDblClick(); 
	int			OnFieldListDeleteItem(); 
	int			OnFieldListUpdateSample(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	long			OnDescriptionListLoadData(); 
	void			OnDescriptionListSelectChange(int nOldItem, int nNewItem); 
	void			OnDescriptionListDblClick(); 
	int			OnDescriptionListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnTestSelect(); 
	CInterfaceProtocolDialog(CWnd *pParent);
	~CInterfaceProtocolDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddInterfaceProtocolDialog(); 
	int OnEditInterfaceProtocolDialog(); 
	int OnDeleteInterfaceProtocolDialog(); 
	int OnSaveInterfaceProtocolDialog(); 
	int OnCancelInterfaceProtocolDialog(); 
	int OnInterfaceProtocolDialogListLoadData(); 
};
#endif
