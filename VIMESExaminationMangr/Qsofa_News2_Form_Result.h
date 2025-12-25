#ifndef CHMSQSOFA_NEWS2_FORM_RESULT_H
#define CHMSQSOFA_NEWS2_FORM_RESULT_H

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
class CHMSQsofa_News2_Form_Result : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndThangDiemNews2;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndList2;
	CGuiButton		m_wndClose;
	CGuiGroupBox	m_wndThangDiemqsofa;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnList2LoadData(); 
	void			OnList2SelectChange(int nOldItem, int nNewItem); 
	void			OnList2DblClick(); 
	int			OnList2DeleteItem(); 
	void			OnCloseSelect();
	long	m_nDocNo;
	CHMSQsofa_News2_Form_Result(CWnd *pParent);
	~CHMSQsofa_News2_Form_Result();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSQsofa_News2_Form_Result(); 
	int OnEditCHMSQsofa_News2_Form_Result(); 
	int OnDeleteCHMSQsofa_News2_Form_Result(); 
	int OnSaveCHMSQsofa_News2_Form_Result(); 
	int OnCancelCHMSQsofa_News2_Form_Result(); 
	int OnCHMSQsofa_News2_Form_ResultListLoadData(); 
};
#endif
