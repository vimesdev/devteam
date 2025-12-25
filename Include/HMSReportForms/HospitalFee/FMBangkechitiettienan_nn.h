#ifndef CFMBangkechitiettienannnNN_H
#define CFMBangkechitiettienannnNN_H

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
#include "GuiView.h"
#include "DbField.h"
#include "Excel.h"
class CFMBangkechitiettienannn : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndBangketienanchitiet;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiCheckBox	m_wndOtherFoodLevel;
	CGuiComboBox	m_wndObject;
	CGuiCheckBox	m_wndChedoan;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndObjectList;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndPolicy;
	CGuiRadioButton	m_wndAll;
	CGuiCheckBox	m_wndOtherFee;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	BOOL	m_bChedoan;
	BOOL	m_bOtherFoodLevel;
	BOOL	m_bOtherFee;
	int	m_nInsurance;
	int	m_nService;
	int	m_nPolicy;
	int	m_nAll;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnExportSelect();
	void			OnExporttotal();
	void			OnExporttotalall();
	void			OnExportdetail();
	void			OnPrintSelect();
	void			OnChedoanSelect();
	long			OnObjectListLoadData();
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnPolicySelect(); 
	void			OnAllSelect();
	void			OnOtherFoodLevelSelect();
	void			OnOtherFeeSelect();
	int			OnCheckBeforeExport(CExcel* xls, CRecord* rs);
	CFMBangkechitiettienannn();
	~CFMBangkechitiettienannn();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
	CString GetQueryString();
	CString GetQueryString1();
	CString GetQueryStringall();
	CString GetQueryStringallforfrint();
};
#endif