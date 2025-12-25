#ifndef HMSChungNhanNghiViec_H
#define HMSChungNhanNghiViec_H

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
class AFX_EXT_CLASS CHMSChungNhanNghiViec : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndBookNoLabel;
	CGuiNumberCtrl	m_wndBookNo;
	CGuiLabel		m_wndChanDoanLabel;
	CGuiTextCtrl	m_wndChanDoan;
	CGuiLabel		m_wndSoNgayNghiLabel;
	CGuiNumberCtrl	m_wndSoNgayNghi;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndFatherNameLabel;
	CGuiTextCtrl	m_wndFatherName;
	CGuiLabel		m_wndDoctorNameLabel;
	CGuiComboBox	m_wndDoctorName;
	CGuiLabel		m_wndMotherNameLabel;
	CGuiTextCtrl	m_wndMotherName;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiCheckBox	m_wndNghiDuongThai;

	CGuiLabel		m_wndWorkPlaceLabel;
	CGuiTextCtrl	m_wndWorkPlace;
	CGuiLabel		m_wndPrintDateTimeLabel;
	CGuiDateTimeCtrl	m_wndPrintDateTime;
	CString	m_szPrintDateTime;

	BOOL			m_bNghiDuongThai;
	long	m_nIndex;
	long	m_nBookNo;
	CString	m_szChanDoan;
	int  	m_nSoNgayNghi;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString m_szFatherName;
	CString m_szMotherName;
	CString m_szDoctorNameKey;
	CString	m_szNote;
	CString m_szSerial;
	long	m_nDocNo;
	CString m_szCardNo;
	CString m_szWorkPlace;
	CDbfMap m_tbl;
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnBookNoChange(); 
	//void			OnBookNoSetfocus(); 
	//void			OnBookNoKillfocus(); 
	int			OnBookNoCheckValue(); 
	//void			OnChanDoanChange(); 
	//void			OnChanDoanSetfocus(); 
	//void			OnChanDoanKillfocus(); 
	int			OnChanDoanCheckValue(); 
	//void			OnSoNgayNghiChange(); 
	//void			OnSoNgayNghiSetfocus(); 
	//void			OnSoNgayNghiKillfocus(); 
	int			OnSoNgayNghiCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue();
	int			OnPrintDateTimeCheckValue();
	//void			OnFatherNameChange(); 
	//void			OnFatherNameSetfocus(); 
	//void			OnFatherNameKillfocus(); 
	int			OnFatherNameCheckValue();
	//void			OnMotherNameChange(); 
	//void			OnMotherNameSetfocus(); 
	//void			OnMotherNameKillfocus(); 
	int			OnMotherNameCheckValue();
	int			OnDoctorNameCheckValue();
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 

	void			OnDoctorNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorNameSelendok(); 
	long			OnDoctorNameLoadData(); 

	void			OnUpdateSelect(); 
	void			OnSaveSelect();
	void			OnCancelSelect(); 
	void			OnPrintSelect();
	int			OnCardNoCheckValue();
	CHMSChungNhanNghiViec(CWnd *pParent);
	~CHMSChungNhanNghiViec();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSChungNhanNghiViec(); 
	int OnEditHMSChungNhanNghiViec(); 
	int OnDeleteHMSChungNhanNghiViec(); 
	int OnSaveHMSChungNhanNghiViec(); 
	int OnCancelHMSChungNhanNghiViec(); 
	int OnHMSChungNhanNghiViecListLoadData(); 
};
#endif
