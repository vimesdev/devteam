#ifndef HMSEXTERNALPRESCRIPTIONDIALOG_H
#define HMSEXTERNALPRESCRIPTIONDIALOG_H

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
class AFX_EXT_CLASS CHMSExternalPrescriptionDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNameCntLabel;
	CGuiTextCtrl	m_wndNameCnt;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiLabel		m_wndTimeDayLabel;
	CGuiNumberCtrl	m_wndTimeDay;
	CGuiLabel		m_wndTimeQtyLabel;
	CGuiNumberCtrl	m_wndTimeQty;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szNameCnt;
	CString	m_szUnit;
	long	m_nQuantity;
	CString	m_szIndicationKey;
	long	m_nTimeDay;
	long	m_nTimeQty;
	CString	m_szUsage;
	long	m_nDocumentNo;
	long	m_nReceptIdx;
	long	m_nIndex;
	CDbfMap	m_hms_prescriptionTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnNameCntChange(); 
	//void			OnNameCntSetfocus(); 
	//void			OnNameCntKillfocus(); 
	int			OnNameCntCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	void			OnIndicationAddNew(); 
	//void			OnTimeDayChange(); 
	//void			OnTimeDaySetfocus(); 
	void			OnTimeDayKillfocus(); 
	int			OnTimeDayCheckValue(); 
	//void			OnTimeQtyChange(); 
	//void			OnTimeQtySetfocus(); 
	void			OnTimeQtyKillfocus(); 
	int			OnTimeQtyCheckValue(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSExternalPrescriptionDialog(CWnd *pParent);
	~CHMSExternalPrescriptionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExternalPrescriptionDialog(); 
	int OnEditHMSExternalPrescriptionDialog(); 
	int OnDeleteHMSExternalPrescriptionDialog(); 
	int OnSaveHMSExternalPrescriptionDialog(); 
	int OnCancelHMSExternalPrescriptionDialog(); 
	int OnHMSExternalPrescriptionDialogListLoadData(); 
};
#endif
