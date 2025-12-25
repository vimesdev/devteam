#ifndef HMSNEWBORNRECORD_H
#define HMSNEWBORNRECORD_H

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
#include "ReportDocument.h"
class AFX_EXT_CLASS CHMSNewbornRecord : public CGuiDialog{
protected:
	long m_nReference_DocNo;
public:
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiGroupBox	m_wndNewbornRecord;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateTimeCtrl	m_wndBirthDate;
	CGuiLabel		m_wndNurseLabel;
	CGuiComboBox	m_wndNurse;
	CGuiLabel		m_wndBirthTypeLabel;
	CGuiComboBox	m_wndBirthType;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndFathersNameLabel;
	CGuiTextCtrl	m_wndFathersName;
	CGuiLabel		m_wndFathersAgeLabel;
	CGuiNumberCtrl	m_wndFathersAge;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndRegDateLabel;
	CGuiDateCtrl	m_wndRegDate;
	CGuiLabel		m_wndExpDateLabel;
	CGuiDateCtrl	m_wndExpDate;
	CGuiListCtrl	m_wndChildList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szRecordNo;
	CString	m_szName;
	CString	m_szSexKey;
	CString	m_szBirthDate;
	CString	m_szCardNo;
	CString m_szRegDate;
	CString m_szExpDate;
	CString m_szFathersName;
	long	m_nFathersAge;
	CString	m_szNurseKey;
	CString	m_szBirthTypeKey;
	float	m_nWeight;
	CDbfMap m_hms_patientTbl;
	CDbfMap m_hms_newborn_recordTbl;
	CDbfMap m_hms_cardTbl;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue();
	long		OnChildListLoadData();
	void		OnChildListSelectChange(int nOldItem, int nNewItem);
	void		OnChildListDblClick(); 
	int			OnChildListDeleteItem();
	void			OnAddSelect();
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect();
	void			OnCancelSelect();
	void			OnPrintSelect(); 
	void			OnCloseSelect();
	void			OnListInputDNR();
	void			OnListPrintDNR();
	CHMSNewbornRecord(CWnd *pParent, long nReference_DocNo);
	~CHMSNewbornRecord();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMNewbornRecord(); 
	int OnEditTMNewbornRecord(); 
	int OnDeleteTMNewbornRecord(); 
	int OnSaveTMNewbornRecord(); 
	int OnCancelTMNewbornRecord(); 
	int OnTMNewbornRecordListLoadData(); 
	CString GetQueryString();
	void PrintReportHeader(CReportSection* rptHeader, CRecord* rs);
	long OnNurseLoadData();
	long OnBirthTypeLoadData();
	void InVongDeoTay();
};
#endif
