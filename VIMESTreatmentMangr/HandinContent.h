#ifndef HANDINCONTENT_H
#define HANDINCONTENT_H

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
class CHandinContent : public CGuiDialog
{
protected:
public:
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOutDateLabel;
	CGuiDateCtrl	m_wndOutDate;
	CGuiGroupBox	m_wndHandinContent;
	CGuiCheckBox	m_wndClinicalRecord;
	CGuiCheckBox	m_wndDischargeSheet;
	CGuiCheckBox	m_wndPaymentSheet;
	CGuiCheckBox	m_wndAddnewcard;
	CGuiCheckBox	m_wndIDCard;
	CGuiCheckBox	m_wndOthersSheet;
	CGuiCheckBox	m_wndSeverseDisease;
	CGuiCheckBox	m_wndZviettelCo;
	CGuiTextCtrl	m_wndOtherNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndCCandfreefood;
	CGuiCheckBox	m_wndHTandfreefoodfee;
	CGuiCheckBox	m_wndSolderFeeFoodFrice;
    CGuiCheckBox m_wndGeneralFeeFoodFrice;
	CString	m_szDocumentNo;
	CString	m_szOutDate;
	BOOL	m_bClinicalRecord;
	BOOL	m_bDischargeSheet;
	BOOL	m_bPaymentSheet;
	BOOL	m_bAddnewcard;
	BOOL	m_bIDCard;
	BOOL	m_bOthersSheet;
	BOOL	m_bSeverseDisease;
	BOOL	m_bZviettelCo;
	BOOL	m_bCCandfreefood;
	BOOL	m_bHTandfreefoodfee;
	BOOL	m_bSolderFeeFoodFrice;
    BOOL m_bGeneralFeeFoodFrice;
	CString	m_szOtherNote;
	CDbfMap	m_hms_handin_contentTbl;
	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_clinical_recordTbl;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOutDateChange(); 
	//void			OnOutDateSetfocus(); 
	//void			OnOutDateKillfocus(); 
	int			OnOutDateCheckValue(); 
	void			OnClinicalRecordSelect(); 
	void			OnDischargeSheetSelect(); 
	void			OnPaymentSheetSelect(); 
	void			OnAddnewcardSelect(); 
	void			OnIDCardSelect(); 
	void			OnOthersSheetSelect();
	void			OnSeverseDiseaseSelect(); 
	void			OnZviettelCoSelect();
	void			OnCCandfreefoodSelect();
	void			OnHTandfreefoodfeeSelect();
	void			OnSolderFeeFoodFriceSelect(); 
	//void			OnOtherNoteChange(); 
	//void			OnOtherNoteSetfocus(); 
	//void			OnOtherNoteKillfocus(); 
	int			OnOtherNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHandinContent(CWnd *pParent);
	~CHandinContent();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHandinContent(); 
	int OnEditHandinContent(); 
	int OnDeleteHandinContent(); 
	int OnSaveHandinContent(); 
	int OnCancelHandinContent(); 
	int OnHandinContentListLoadData();
    void OnGeneralFeeFoodFriceSelect();
};
#endif