#ifndef MCONTRACTAPPENDIXDLG_H
#define MCONTRACTAPPENDIXDLG_H

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
class CMContractAppendixDlg : public CGuiDialog{
protected:
	long	m_nContractID;
	
public:
	long	m_nPackageID;
	CString	m_szAppendixID;
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndContractIDLabel;
	CGuiTextCtrl	m_wndContractID;
	CGuiLabel		m_wndAppendixNoLabel;
	CGuiTextCtrl	m_wndAppendixNo;
	CGuiLabel		m_wndAppendIdxDateLabel;
	CGuiDateCtrl	m_wndAppendIdxDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CString	m_szContractID;
	CString	m_szAppendixNo;
	CString	m_szAppendIdxDate;
	CString	m_szTypeKey;
	CString	m_szDescription;
	long	m_nTotalAmount;
	CDbfMap	m_m_contract_appendixTbl;
	//void			OnContractIDChange(); 
	//void			OnContractIDSetfocus(); 
	//void			OnContractIDKillfocus(); 
	int			OnContractIDCheckValue(); 
	//void			OnAppendIdxDateChange(); 
	//void			OnAppendIdxDateSetfocus(); 
	//void			OnAppendIdxDateKillfocus(); 
	int			OnAppendIdxDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnAddLineSelect();
	CMContractAppendixDlg(CWnd *pParent, long nContractID);
	~CMContractAppendixDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMContractAppendixDlg(); 
	int OnEditMContractAppendixDlg(); 
	int OnDeleteMContractAppendixDlg(); 
	int OnSaveMContractAppendixDlg(); 
	int OnCancelMContractAppendixDlg(); 
	int OnMContractAppendixDlgListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
