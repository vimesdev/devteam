#ifndef GUIINPUTDATADIALOG_H
#define GUIINPUTDATADIALOG_H

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
class AFX_EXT_CLASS CGuiInputDataDialog : public CGuiDialog{
protected:
	bool		m_bNumberCtrl;	
	bool		m_bCheckValue;
public:
	CString		m_szTooltip;

	CGuiGroupBox	m_wndInputData;
	CGuiLabel		m_wndValueLabel;
	CGuiNumberCtrl	m_wndNumberValue;
	CGuiTextCtrl	m_wndTextValue;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	double			m_nNumberValue;
	int				m_nLimit;
	double			m_nMin, m_nMax;
	CString			m_szTextValue;
	CString			m_szGroupName;
	CString			m_szValueName;
	//void			OnValueChange(); 
	//void			OnValueSetfocus(); 
	//void			OnValueKillfocus(); 
	int			OnNumberValueCheckValue(); 
	int			OnTextValueCheckValue(); 
	void			OnOKSelect(); 
	void			OnCloseSelect();
	
	//Call before DoModal();
	void		SetTextLimit(int nLimit);
	
	double		GetNumberValue();
	CString		GetTextValue();

	CGuiInputDataDialog(CWnd *pParent, bool bNumber=true, bool bCheckValue=true);
	~CGuiInputDataDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	//Su dung voi kieu control so
	void	SetMinMax(double nMin, double nMax);


};
#endif
