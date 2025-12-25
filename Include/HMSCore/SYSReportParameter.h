#ifndef SYSREPORTPARAMETER_H
#define SYSREPORTPARAMETER_H

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
class AFX_EXT_CLASS CSYSReportParameter : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameter;
	CGuiLabel		m_wndConversionRateLabel;
	CGuiNumberCtrl	m_wndConversionRate;
	CGuiLabel		m_wndNormLabel;
	CGuiNumberCtrl	m_wndNorm;
	CGuiLabel		m_wndEndoscopyTypeLabel;
	CGuiComboBox	m_wndEndoscopyType;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndAnesthesia;
	CGuiCheckBox	m_wndRectum;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nConversionRate;
	long	m_nNorm;
	CString m_szEndoscopyTypeKey;
	BOOL	m_bHitech;
	BOOL	m_bAnesthesia;
	BOOL	m_bRectum;
	CString m_szFeeID;
	CDbfMap m_hms_report_parameterTbl;
	//void			OnConversionRateChange(); 
	//void			OnConversionRateSetfocus(); 
	//void			OnConversionRateKillfocus(); 
	int			OnConversionRateCheckValue(); 
	//void			OnNormChange(); 
	//void			OnNormSetfocus(); 
	//void			OnNormKillfocus(); 
	int			OnNormCheckValue(); 
	long		OnEndoscopyTypeLoadData();
	void			OnHitechSelect(); 
	void			OnAnesthesiaSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CSYSReportParameter(CWnd *pParent);
	~CSYSReportParameter();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void GetDataToScreen();
	void GetScreenToData();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
};
#endif
