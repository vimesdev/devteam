#ifndef TM_ASSIGNPATHOLOGY_H
#define TM_ASSIGNPATHOLOGY_H

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
class CTM_AssignPathology : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndTestSummarizeLabel;
	CGuiTextCtrl	m_wndTestSummarize;
	CGuiLabel		m_wndTreatmentProcessLabel;
	CGuiTextCtrl	m_wndTreatmentProcess;
	CGuiLabel		m_wndTestRequestLabel;
	CGuiTextCtrl	m_wndTestRequest;
	CGuiLabel		m_wndBenhPhamLabel;
	CGuiTextCtrl	m_wndBenhPham;
	CGuiLabel		m_wndNhanXetLabel;
	CGuiTextCtrl	m_wndNhanXet;
	CGuiLabel		m_wndDungDichLabel;
	CGuiTextCtrl	m_wndDungDich;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndKetQuaLabel;
	CGuiTextCtrl	m_wndKetQua;
	CGuiLabel		m_wndTotalTestLabel;
	CGuiTextCtrl	m_wndTotalTest;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	long	m_nOrderID;
	CString	m_szDiagnostic;
	CString	m_szTestSummarize;
	CString	m_szTreatmentProcess;
	CString	m_szTestRequest;
	CString	m_szBenhPham;
	CString	m_szNhanXet;
	CString	m_szDungDich;
	CString	m_szDate;
	CString	m_szKetQua;
	CString	m_szTotalTest;
	CDbfMap m_tbl_hmsassignpathology;
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
	//void			OnTestSummarizeChange(); 
	//void			OnTestSummarizeSetfocus(); 
	//void			OnTestSummarizeKillfocus(); 
	int			OnTestSummarizeCheckValue(); 
	//void			OnTreatmentProcessChange(); 
	//void			OnTreatmentProcessSetfocus(); 
	//void			OnTreatmentProcessKillfocus(); 
	int			OnTreatmentProcessCheckValue(); 
	//void			OnTestRequestChange(); 
	//void			OnTestRequestSetfocus(); 
	//void			OnTestRequestKillfocus(); 
	int			OnTestRequestCheckValue(); 
	//void			OnBenhPhamChange(); 
	//void			OnBenhPhamSetfocus(); 
	//void			OnBenhPhamKillfocus(); 
	int			OnBenhPhamCheckValue(); 
	//void			OnNhanXetChange(); 
	//void			OnNhanXetSetfocus(); 
	//void			OnNhanXetKillfocus(); 
	int			OnNhanXetCheckValue(); 
	//void			OnDungDichChange(); 
	//void			OnDungDichSetfocus(); 
	//void			OnDungDichKillfocus(); 
	int			OnDungDichCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnKetQuaChange(); 
	//void			OnKetQuaSetfocus(); 
	//void			OnKetQuaKillfocus(); 
	int			OnKetQuaCheckValue(); 
	//void			OnTotalTestChange(); 
	//void			OnTotalTestSetfocus(); 
	//void			OnTotalTestKillfocus(); 
	int			OnTotalTestCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CTM_AssignPathology(CWnd *pParent);
	~CTM_AssignPathology();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
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