#ifndef STORAGEPREORDERDIALOG_H
#define STORAGEPREORDERDIALOG_H

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

///////////////////////////////////////////////
//Class co chuc nang giu cho thuoc trong kho khong cho order.
///////////////////////////////////////////////

class CStoragePreorderDialog : public CGuiDialog{
protected:
public:
	int				m_nStorageID;
	long			m_nProductItem_ID;

	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndOnHandLabel;
	CGuiNumberCtrl	m_wndOnHand;
	CGuiLabel		m_wndOrderedQuantityLabel;
	CGuiNumberCtrl	m_wndOrderedQuantity;
	CGuiLabel		m_wndPreorderQuantityLabel;
	CGuiNumberCtrl	m_wndPreorderQuantity;
	CGuiButton		m_wndOk;
	CGuiButton		m_wndClose;
	long	m_nOnHand;
	long	m_nOrderedQuantity;
	long	m_nPreorderQuantity;
	//void			OnOnHandChange(); 
	//void			OnOnHandSetfocus(); 
	//void			OnOnHandKillfocus(); 
	int			OnOnHandCheckValue(); 
	//void			OnOrderedQuantityChange(); 
	//void			OnOrderedQuantitySetfocus(); 
	//void			OnOrderedQuantityKillfocus(); 
	int			OnOrderedQuantityCheckValue(); 
	//void			OnPreorderQuantityChange(); 
	//void			OnPreorderQuantitySetfocus(); 
	//void			OnPreorderQuantityKillfocus(); 
	int			OnPreorderQuantityCheckValue(); 
	void			OnOkSelect(); 
	void			OnCloseSelect(); 
	CStoragePreorderDialog(CWnd *pParent, int nMode);
	~CStoragePreorderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStoragePreorderDialog(); 
	int OnEditStoragePreorderDialog(); 
	int OnDeleteStoragePreorderDialog(); 
	int OnSaveStoragePreorderDialog(); 
	int OnCancelStoragePreorderDialog(); 
	int OnStoragePreorderDialogListLoadData(); 
};
#endif
