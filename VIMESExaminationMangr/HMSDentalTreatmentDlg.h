#ifndef HMSDENTALTREATMENTDLG_H
#define HMSDENTALTREATMENTDLG_H

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
class CHMSDentalTreatmentDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndTeeth;
	CGuiListCtrl	m_wndTeethList;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndEnterDateLabel;
	CGuiDateTimeCtrl	m_wndEnterDate;
	CGuiLabel		m_wndNewLabel;
	CGuiNumberCtrl	m_wndNew;
	CGuiLabel		m_wndDentureLabel;
	CGuiNumberCtrl	m_wndDenture;
	CGuiLabel		m_wndTimeLabel;
	CGuiNumberCtrl	m_wndTime;
	CGuiLabel		m_wndExtractionsLabel;
	CGuiNumberCtrl	m_wndExtractions;
	CGuiLabel		m_wndPreserveTreatmentLabel;
	CGuiNumberCtrl	m_wndPreserveTreatment;
	CGuiLabel		m_wndCuredTreatmentLabel;
	CGuiNumberCtrl	m_wndCuredTreatment;
	CGuiButton		m_wndCuredTreatmentList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	long	m_nDocNo;
	long    m_nIdx;
	CString	m_szEnterDate;
	long	m_nNew;
	long	m_nDenture;
	long	m_nTime;
	long	m_nExtractions;
	long	m_nPreserveTreatment;
	long	m_nCuredTreatment;
	CDbfMap m_tbl_dental;
	long			OnTeethListLoadData(); 
	void			OnTeethListSelectChange(int nOldItem, int nNewItem); 
	void			OnTeethListDblClick(); 
	int			OnTeethListDeleteItem(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnEnterDateChange(); 
	//void			OnEnterDateSetfocus(); 
	//void			OnEnterDateKillfocus(); 
	int			OnEnterDateCheckValue(); 
	//void			OnNewChange(); 
	//void			OnNewSetfocus(); 
	//void			OnNewKillfocus(); 
	int			OnNewCheckValue(); 
	//void			OnDentureChange(); 
	//void			OnDentureSetfocus(); 
	//void			OnDentureKillfocus(); 
	int			OnDentureCheckValue(); 
	//void			OnTimeChange(); 
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	int			OnTimeCheckValue(); 
	//void			OnExtractionsChange(); 
	//void			OnExtractionsSetfocus(); 
	//void			OnExtractionsKillfocus(); 
	int			OnExtractionsCheckValue(); 
	//void			OnPreserveTreatmentChange(); 
	//void			OnPreserveTreatmentSetfocus(); 
	//void			OnPreserveTreatmentKillfocus(); 
	int			OnPreserveTreatmentCheckValue(); 
	//void			OnCuredTreatmentChange(); 
	//void			OnCuredTreatmentSetfocus(); 
	//void			OnCuredTreatmentKillfocus(); 
	int			OnCuredTreatmentCheckValue(); 
	void			OnCuredTreatmentListSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSDentalTreatmentDlg(CWnd *pParent);
	~CHMSDentalTreatmentDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDentalTreatmentDlg(); 
	int OnEditHMSDentalTreatmentDlg(); 
	int OnDeleteHMSDentalTreatmentDlg(); 
	int OnSaveHMSDentalTreatmentDlg(); 
	int OnCancelHMSDentalTreatmentDlg(); 
	int OnHMSDentalTreatmentDlgListLoadData(); 
};
#endif
