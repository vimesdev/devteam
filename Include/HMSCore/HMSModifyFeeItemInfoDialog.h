#ifndef HMSMODIFYFEEITEMINFODIALOG_H
#define HMSMODIFYFEEITEMINFODIALOG_H

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
class CHMSModifyFeeItemInfoDialog : public CGuiDialog
{
protected:
public:
	long	m_nOrderID;
	long	m_nProductID;
	CString	m_szClass;

	CGuiGroupBox	m_wndModifyFeeInformations;
	CGuiGroupBox	m_wndStent;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndInsideOperationLabel;
	CGuiNumberCtrl	m_wndInsideOperation;
	CGuiLabel		m_wndOutsideOperationLabel;
	CGuiNumberCtrl	m_wndOutsideOperation;
	CGuiCheckBox	m_wndApplyAssessInsurance;
	CGuiNumberCtrl	m_wndAssessInsurance;
	CGuiRadioButton	m_wndInsurancePaid;
	CGuiNumberCtrl	m_wndQtyInsurance;
	CGuiRadioButton	m_wndPatPaid;
	CGuiNumberCtrl	m_wndQtyDiff;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndKhongtinhtran;
	double	m_nQuantity;
	double	m_nInsideOperation;
	double	m_nOutsideOperation;
	int		m_nInsurancePaid;
	BOOL	m_bApplyAssessInsurance;
	BOOL	m_bKhongtinhtran;
	double	m_nAssessInsurance;
	double	m_nQtyInsurance;
	double	m_nQtyDiff;
	
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnInsideOperationChange(); 
	//void			OnInsideOperationSetfocus(); 
	//void			OnInsideOperationKillfocus(); 
	int			OnInsideOperationCheckValue(); 
	//void			OnOutsideOperationChange(); 
	//void			OnOutsideOperationSetfocus(); 
	//void			OnOutsideOperationKillfocus(); 
	int			OnOutsideOperationCheckValue(); 
	void			OnApplyAssessInsuranceSelect(); 
	//void			OnAssessInsuranceChange(); 
	//void			OnAssessInsuranceSetfocus(); 
	//void			OnAssessInsuranceKillfocus(); 
	int			OnAssessInsuranceCheckValue(); 
	void			OnInsurancePaidSelect(); 
	//void			OnQtyInsuranceChange(); 
	//void			OnQtyInsuranceSetfocus(); 
	//void			OnQtyInsuranceKillfocus(); 
	int			OnQtyInsuranceCheckValue(); 
	void			OnPatPaidSelect(); 
	//void			OnQtyDiffChange(); 
	//void			OnQtyDiffSetfocus(); 
	//void			OnQtyDiffKillfocus(); 
	int			OnQtyDiffCheckValue(); 
	void			OnTime1Select(); 
	void			OnTime2Select(); 
	void			OnTime3Select(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSModifyFeeItemInfoDialog(CWnd *pParent);
	~CHMSModifyFeeItemInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void			OnKhongtinhtranSelect(); 
	int SetMode(int nMode);
	int OnAddHMSModifyFeeItemInfoDialog(); 
	int OnEditHMSModifyFeeItemInfoDialog(); 
	int OnDeleteHMSModifyFeeItemInfoDialog(); 
	int OnSaveHMSModifyFeeItemInfoDialog(); 
	int OnCancelHMSModifyFeeItemInfoDialog(); 
	int OnHMSModifyFeeItemInfoDialogListLoadData(); 
};
#endif
