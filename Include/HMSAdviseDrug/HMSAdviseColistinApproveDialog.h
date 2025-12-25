#ifndef HMSADVISECOLISTINAPPROVEDIALOG_H
#define HMSADVISECOLISTINAPPROVEDIALOG_H

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
class CHMSAdviseColistinApproveDialog : public CGuiDialog{
protected:

public:
	long	m_nOrderId;
	CDbfMap	m_hms_advise_Tbl;

	CGuiGroupBox	m_wndDuocsylamsangBox;
	CGuiLabel		m_wndChidinh_colistin;
	CGuiCheckBox	m_wndChidinh_DY;
	CGuiCheckBox	m_wndChidinh_KDY;
	CGuiLabel		m_wndChidinh_lydoLabel;
	CGuiTextCtrl	m_wndChidinh_lydo;
	CGuiLabel		m_wndNongdodich_CSS;
	CGuiCheckBox	m_wndNongdodich_DY;
	CGuiCheckBox	m_wndNongdodich_KDY;
	CGuiLabel		m_wndNongdodich_lydoLabel;
	CGuiTextCtrl	m_wndNongdodich_lydo;
	CGuiLabel		m_wndLieuNap;
	CGuiCheckBox	m_wndLieunap_DY;
	CGuiCheckBox	m_wndLieunap_KDY;
	CGuiLabel		m_wndLieunap_lydoLabel;
	CGuiTextCtrl	m_wndLieunap_lydo;
	CGuiLabel		m_wndLieuduytri;
	CGuiCheckBox	m_wndLieuduytri_DY;
	CGuiCheckBox	m_wndLieuduytri_KDY;
	CGuiLabel		m_wndLieuduytri_lydoLabel;
	CGuiTextCtrl	m_wndLieuduytri_lydo;
	CGuiLabel		m_wndLieukhidung_colistin;
	CGuiCheckBox	m_wndLieukhidung_colistin_DY;
	CGuiCheckBox	m_wndLieukhidung_colistin_KDY;
	CGuiLabel		m_wndLieukhidung_colistin_lydoLabel;
	CGuiTextCtrl	m_wndLieukhidung_colistin_lydo;
	CGuiLabel		m_wndTenkhangsinhphoihop;
	CGuiCheckBox	m_wndTenkhangsinhphoihop_DY;
	CGuiCheckBox	m_wndTenkhangsinhphoihop_KDY;
	CGuiLabel		m_wndTenkhangsinhphoihop_lydoLabel;
	CGuiTextCtrl	m_wndTenkhangsinhphoihop_lydo;
	CGuiLabel		m_wndLieukhangsinhphoihop;
	CGuiCheckBox	m_wndLieukhangsinhphoihop_DY;
	CGuiCheckBox	m_wndLieukhangsinhphoihop_KDY;
	CGuiLabel		m_wndLieukhangsinhphoihop_lydoLabel;
	CGuiTextCtrl	m_wndLieukhangsinhphoihop_lydo;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	BOOL	m_bChidinh_DY;
	BOOL	m_bChidinh_KDY;
	CString	m_szChidinh_lydo;
	BOOL	m_bNongdodich_DY;
	BOOL	m_bNongdodich_KDY;
	CString	m_szNongdodich_lydo;
	BOOL	m_bLieunap_DY;
	BOOL	m_bLieunap_KDY;
	CString	m_szLieunap_lydo;
	BOOL	m_bLieuduytri_DY;
	BOOL	m_bLieuduytri_KDY;
	CString	m_szLieuduytri_lydo;
	BOOL	m_bLieukhidung_colistin_DY;
	BOOL	m_bLieukhidung_colistin_KDY;
	CString	m_szLieukhidung_colistin_lydo;
	BOOL	m_bTenkhangsinhphoihop_DY;
	BOOL	m_bTenkhangsinhphoihop_KDY;
	CString	m_szTenkhangsinhphoihop_lydo;
	BOOL	m_bLieukhangsinhphoihop_DY;
	BOOL	m_bLieukhangsinhphoihop_KDY;
	CString	m_szLieukhangsinhphoihop_lydo;
	CString	m_szNote;
	void			OnChidinh_DYSelect(); 
	void			OnChidinh_KDYSelect(); 
	//void			OnChidinh_lydoChange(); 
	//void			OnChidinh_lydoSetfocus(); 
	//void			OnChidinh_lydoKillfocus(); 
	int			OnChidinh_lydoCheckValue(); 
	void			OnNongdodich_DYSelect(); 
	void			OnNongdodich_KDYSelect(); 
	//void			OnNongdodich_lydoChange(); 
	//void			OnNongdodich_lydoSetfocus(); 
	//void			OnNongdodich_lydoKillfocus(); 
	int			OnNongdodich_lydoCheckValue(); 
	void			OnLieunap_DYSelect(); 
	void			OnLieunap_KDYSelect(); 
	//void			OnLieunap_lydoChange(); 
	//void			OnLieunap_lydoSetfocus(); 
	//void			OnLieunap_lydoKillfocus(); 
	int			OnLieunap_lydoCheckValue(); 
	void			OnLieuduytri_DYSelect(); 
	void			OnLieuduytri_KDYSelect(); 
	//void			OnLieuduytri_lydoChange(); 
	//void			OnLieuduytri_lydoSetfocus(); 
	//void			OnLieuduytri_lydoKillfocus(); 
	int			OnLieuduytri_lydoCheckValue(); 
	void			OnLieukhidung_colistin_DYSelect(); 
	void			OnLieukhidung_colistin_KDYSelect(); 
	//void			OnLieukhidung_colistin_lydoChange(); 
	//void			OnLieukhidung_colistin_lydoSetfocus(); 
	//void			OnLieukhidung_colistin_lydoKillfocus(); 
	int			OnLieukhidung_colistin_lydoCheckValue(); 
	void			OnTenkhangsinhphoihop_DYSelect(); 
	void			OnTenkhangsinhphoihop_KDYSelect(); 
	//void			OnTenkhangsinhphoihop_lydoChange(); 
	//void			OnTenkhangsinhphoihop_lydoSetfocus(); 
	//void			OnTenkhangsinhphoihop_lydoKillfocus(); 
	int			OnTenkhangsinhphoihop_lydoCheckValue(); 
	void			OnLieukhangsinhphoihop_DYSelect(); 
	void			OnLieukhangsinhphoihop_KDYSelect(); 
	//void			OnLieukhangsinhphoihop_lydoChange(); 
	//void			OnLieukhangsinhphoihop_lydoSetfocus(); 
	//void			OnLieukhangsinhphoihop_lydoKillfocus(); 
	int			OnLieukhangsinhphoihop_lydoCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSAdviseColistinApproveDialog(CWnd *pParent, long nOrderId);
	~CHMSAdviseColistinApproveDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdviseColistinApproveDialog(); 
	int OnEditHMSAdviseColistinApproveDialog(); 
	int OnDeleteHMSAdviseColistinApproveDialog(); 
	int OnSaveHMSAdviseColistinApproveDialog(); 
	int OnCancelHMSAdviseColistinApproveDialog(); 
	int OnHMSAdviseColistinApproveDialogListLoadData(); 
	void EnableReason();
};
#endif
