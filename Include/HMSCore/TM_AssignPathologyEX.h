#ifndef TM_ASSIGNPATHOLOGYEX_H
#define TM_ASSIGNPATHOLOGYEX_H

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
class CTM_AssignPathologyEX : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiGroupBox	m_wndNhanxetdaitheLabel;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndTenXNLabel;
	CGuiTextCtrl	m_wndTenXN;
	CGuiLabel		m_wndSinhthietduocnhaptuLabel;
	CGuiTextCtrl	m_wndSinhthietduocnhaptu;
	CGuiLabel		m_wndDungDichLabel;
	CGuiComboBox	m_wndDungDich;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndTomtatdauhieulamsangLabel;
	CGuiButton		m_wndKetquaCLS;
	CGuiTextCtrl	m_wndTomtatdauhieulamsang;
	CGuiLabel		m_wndQuatrinhdieutriLabel;
	CGuiTextCtrl	m_wndQuatrinhdieutri;
	CGuiButton		m_wndPhieumo;
	CGuiTextCtrl	m_wndNhanxetdaithe;
	CGuiButton		m_wndKetquanoisoiLabel;
	CGuiTextCtrl	m_wndKetquanoisoi;
	CGuiLabel		m_wndKetquasinhthietlantruocLabel;
	CGuiTextCtrl	m_wndKetquasinhthietlantruoc;
	CGuiLabel		m_wndTongsoxetnghiemLabel;
	CGuiTextCtrl	m_wndTongsoxetnghiem;
	CGuiButton		m_wndKetquasinhthietlantruoclabel;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CDbfMap m_tbl_HMS_YEUCAUGIAIPHAUBENH;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	long	m_nOrderidline;
	CString	m_szDiagnostic;
	CString	m_szTenXN;
	CString	m_szSinhthietduocnhaptu;
	CString	m_szDungDichKey;
	CString	m_szDate;
	CString	m_szTomtatdauhieulamsang;
	CString	m_szQuatrinhdieutri;
	CString	m_szNhanxetdaithe;
	CString	m_szKetquanoisoi;
	CString	m_szKetquasinhthietlantruoc;
	CString	m_szTongsoxetnghiem;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnTenXNChange(); 
	//void			OnTenXNSetfocus(); 
	//void			OnTenXNKillfocus(); 
	int			OnTenXNCheckValue(); 
	//void			OnSinhthietduocnhaptuChange(); 
	//void			OnSinhthietduocnhaptuSetfocus(); 
	//void			OnSinhthietduocnhaptuKillfocus(); 
	int			OnSinhthietduocnhaptuCheckValue(); 
	void			OnDungDichSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDungDichSelendok(); 
	//void			OnDungDichSetfocus(); 
	//void			OnDungDichKillfocus(); 
	long			OnDungDichLoadData(); 
	//void			OnDungDichAddNew(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnKetquaCLSSelect(); 
	//void			OnTomtatdauhieulamsangChange(); 
	//void			OnTomtatdauhieulamsangSetfocus(); 
	//void			OnTomtatdauhieulamsangKillfocus(); 
	int			OnTomtatdauhieulamsangCheckValue(); 
	//void			OnQuatrinhdieutriChange(); 
	//void			OnQuatrinhdieutriSetfocus(); 
	//void			OnQuatrinhdieutriKillfocus(); 
	int			OnQuatrinhdieutriCheckValue(); 
	void			OnPhieumoSelect(); 
	//void			OnNhanxetdaitheChange(); 
	//void			OnNhanxetdaitheSetfocus(); 
	//void			OnNhanxetdaitheKillfocus(); 
	int			OnNhanxetdaitheCheckValue(); 
	void			OnKetquanoisoiLabelSelect(); 
	//void			OnKetquanoisoiChange(); 
	//void			OnKetquanoisoiSetfocus(); 
	//void			OnKetquanoisoiKillfocus(); 
	int			OnKetquanoisoiCheckValue(); 
	//void			OnKetquasinhthietlantruocChange(); 
	//void			OnKetquasinhthietlantruocSetfocus(); 
	//void			OnKetquasinhthietlantruocKillfocus(); 
	int			OnKetquasinhthietlantruocCheckValue();
	void			OnKetquasinhthietlantruoclabelSelect(); 
	//void			OnTongsoxetnghiemChange(); 
	//void			OnTongsoxetnghiemSetfocus(); 
	//void			OnTongsoxetnghiemKillfocus(); 
	int			OnTongsoxetnghiemCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CTM_AssignPathologyEX(CWnd *pParent);
	~CTM_AssignPathologyEX();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTM_AssignPathology(); 
	int OnEditTM_AssignPathology(); 
	int OnDeleteTM_AssignPathology(); 
	int OnSaveTM_AssignPathology(); 
	int OnCancelTM_AssignPathology(); 
	int OnTM_AssignPathologyListLoadData(); 
};
#endif