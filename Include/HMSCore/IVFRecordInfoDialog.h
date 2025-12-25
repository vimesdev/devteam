#ifndef IVFRecordInfoDialog_H
#define IVFRecordInfoDialog_H

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
#include "IVFRecordSummaryView.h"
#include "IVFWifeInfoView.h"
#include "IVFHusbandInfoView.h"
#include "IVFAdditionalInfoView.h"
#include "IVFDonorInfoView.h"
#include "IVFDonorInfoView_V2.h"

//Benh an hiem muon
class AFX_EXT_CLASS CIVFRecordInfoDialog : public CGuiDialog{
protected:
	BOOL	m_bInitWife;
	BOOL	m_bInitHusband;
	BOOL	m_bInitSummary;
	BOOL	m_bInitDonor;
public:
	CGuiTabCtrl	m_wndTab;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CIVFRecordSummaryView m_wndTomTat;
	//CIVFDonorInfoView m_wndDonor;
	CIVFDonorInfoView_V2 m_wndDonor;
	CIVFAdditionalInfoView m_wndInfertilityInfo;
	CIVFHusbandInfoView m_wndChong;
	CIVFWifeInfoView m_wndVo;

	
	void			OnTabSelectChange(int nOld, int nNew); 
	CString m_szDocNo;
	CString m_szPatientNo;
	long	m_nDocNo;
	long	m_nPatientNo;
	int		m_nTabID;
	CIVFRecordInfoDialog(CWnd *pParent);
	~CIVFRecordInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void OnPrintSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	int SetMode(int nMode);
	int OnAddIVFRecordInfoDialog(); 
	int OnEditIVFRecordInfoDialog(); 
	int OnDeleteIVFRecordInfoDialog(); 
	int OnSaveIVFRecordInfoDialog(); 
	int OnCancelIVFRecordInfoDialog(); 
	int OnIVFRecordInfoDialogListLoadData(); 
	int OnCheckExist();
};
#endif
