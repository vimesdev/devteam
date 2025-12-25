#ifndef HMSFUNCTIONALTESTDIALOG_H
#define HMSFUNCTIONALTESTDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSFunctionalTestDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndFuntionalTestInformation;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndTemperatureLabel;
	CGuiNumberCtrl	m_wndTemperature;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiNumberCtrl	m_wndBloodPressure;
	CGuiNumberCtrl	m_wndBloodPressuerex;
	CGuiLabel		m_wndBreathingIntervalLabel;
	CGuiNumberCtrl	m_wndBreathingInterval;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nPulse;
	long	m_nTemperature;
	long	m_nBloodPressure;
	long	m_nBloodPressuerex;
	long	m_nBreathingInterval;
	long	m_nWeight;
	long	m_nHeight;
	//void			OnPulseChange(); 
	//void			OnPulseSetfocus(); 
	//void			OnPulseKillfocus(); 
	int			OnPulseCheckValue(); 
	//void			OnTemperatureChange(); 
	//void			OnTemperatureSetfocus(); 
	//void			OnTemperatureKillfocus(); 
	int			OnTemperatureCheckValue(); 
	//void			OnBloodPressureChange(); 
	//void			OnBloodPressureSetfocus(); 
	//void			OnBloodPressureKillfocus(); 
	int			OnBloodPressureCheckValue(); 
	//void			OnBloodPressuerexChange(); 
	//void			OnBloodPressuerexSetfocus(); 
	//void			OnBloodPressuerexKillfocus(); 
	int			OnBloodPressuerexCheckValue(); 
	//void			OnBreathingIntervalChange(); 
	//void			OnBreathingIntervalSetfocus(); 
	//void			OnBreathingIntervalKillfocus(); 
	int			OnBreathingIntervalCheckValue(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSFunctionalTestDialog(CWnd *pParent);
	~CHMSFunctionalTestDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFunctionalTestDialog(); 
	int OnEditHMSFunctionalTestDialog(); 
	int OnDeleteHMSFunctionalTestDialog(); 
	int OnSaveHMSFunctionalTestDialog(); 
	int OnCancelHMSFunctionalTestDialog(); 
	int OnHMSFunctionalTestDialogListLoadData(); 
};
#endif
