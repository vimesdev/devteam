#ifndef WARDMEDICALCABINETDIALOG_H
#define WARDMEDICALCABINETDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
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
#include "WardMedicalCabinetOrderList.h"
#include "WardMedicalCabinetOrder.h"
#include "WardMedicalDebtView.h"
///////////////////////////////////
//BO SUNG HOAN TRA THUOC TU TRUC
//////////////////////////////////
class AFX_EXT_CLASS CWardMedicalCabinetDialog : public CGuiDialog{
protected:
public:
	CWardMedicalCabinetOrderList	m_wndMedicalOrderList;
	CWardMedicalCabinetOrder		m_wndMedicalOrder;
	CWardMedicalCabinetOrderList	m_wndMedicalDebitOrderList;
	CWardMedicalDebtView			m_wndMedicalDebtView;
	CGuiTabCtrl	m_wndTab;
	CWnd*			m_wndOrder;
	void			OnTabSelectChange(int nOld, int nNew); 
	CWardMedicalCabinetDialog(CWnd *pParent);
	~CWardMedicalCabinetDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddWardMedicalCabinetDialog(); 
	int OnEditWardMedicalCabinetDialog(); 
	int OnDeleteWardMedicalCabinetDialog(); 
	int OnSaveWardMedicalCabinetDialog(); 
	int OnCancelWardMedicalCabinetDialog(); 
	int OnWardMedicalCabinetDialogListLoadData(); 
};
#endif
