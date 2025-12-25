#ifndef HMSCHUYENNGUONTTBENHNHANCOVID19DIALOG_H
#define HMSCHUYENNGUONTTBENHNHANCOVID19DIALOG_H
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
class CHMSChuyennguonTTbenhnhancovid19 : public CGuiDialog
{

protected:
public:
	long	m_nDocumentNo;
	long	m_nInvoiceNo;

	CGuiGroupBox	m_wndPaymentSource;
	CGuiGroupBox	m_wndBoloc;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton	m_wndTatca;
	CGuiRadioButton	m_wndPhikham;
	CGuiRadioButton	m_wndPhiCLS;
	CGuiRadioButton	m_wndPhithuoc;
	CGuiRadioButton	m_wndPhivattu;
	CGuiRadioButton	m_wndTienan;
	CGuiRadioButton	m_wndGoidichvu;
	CGuiRadioButton	m_wndTiengiuong;
	CGuiRadioButton	m_wndPhiPTTT;
	CGuiCheckBox	m_wndChitinhmucphingansachtt;
	CGuiCheckBox	m_wndLocxncovid19;
	CGuiCheckBox	m_wndLoccpbntra;
	int	m_nTatca;
	int	m_nPhikham;
	int	m_nPhiCLS;
	int	m_nPhithuoc;
	int	m_nPhivattu;
	int	m_nTienan;
	int	m_nGoidichvu;
	int	m_nTiengiuong;
	int	m_nPhiPTTT;
	BOOL	m_bLocxncovid19;
	BOOL	m_bChitinhmucphingansachtt;
	BOOL	m_bLoccpbntra;
	void			OnOKSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();

	CHMSChuyennguonTTbenhnhancovid19(CWnd *pParent);
	~CHMSChuyennguonTTbenhnhancovid19();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void			OnTatcaSelect(); 
	void			OnPhikhamSelect(); 
	void			OnPhiCLSSelect(); 
	void			OnPhithuocSelect(); 
	void			OnPhivattuSelect(); 
	void			OnTienanSelect(); 
	void			OnGoidichvuSelect(); 
	void			OnTiengiuongSelect();
	void			OnPhiPTTTSelect(); 
	void			OnChitinhmucphingansachttSelect();
	void			OnLocxncovid19Select();
	void			OnLoccpbntraSelect();
	int			OnMarkAllSelect();
	int			OnUnMarkSelect();
	int			OnMarkFoodFeeSelect();
	int			OnUnMarkA4FeeSelect();
	int SetMode(int nMode);
	int OnAddHMSChuyennguonTTbenhnhancovid19(); 
	int OnEditHMSChuyennguonTTbenhnhancovid19(); 
	int OnDeleteHMSChuyennguonTTbenhnhancovid19(); 
	int OnSaveHMSChuyennguonTTbenhnhancovid19(); 
	int OnCancelHMSChuyennguonTTbenhnhancovid19(); 
	int OnHMSChuyennguonTTbenhnhancovid19ListLoadData(); 
};
#endif