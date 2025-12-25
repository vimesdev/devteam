#ifndef IVFPHIEUTHEODOITRURAPHOIDIALOG_H
#define IVFPHIEUTHEODOITRURAPHOIDIALOG_H

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
class CIVFPhieuTheoDoiTruRaPhoiDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndNgayChocHutLabel;
	CGuiDateCtrl	m_wndNgayChocHut;
	CGuiLabel		m_wndSoPhoiTruLabel;
	CGuiNumberCtrl	m_wndSoPhoiTru;
	CGuiLabel		m_wndNguoiTruLabel;
	CGuiTextCtrl	m_wndNguoiTru;
	CGuiLabel		m_wndThungLabel;
	CGuiNumberCtrl	m_wndThung;
	CGuiCheckBox	m_wndCassette1Label;
	CGuiTextCtrl	m_wndCassette1;
	CGuiLabel		m_wndTop1Label;
	CGuiTextCtrl	m_wndTop1;
	CGuiLabel		m_wndTop2Label;
	CGuiTextCtrl	m_wndTop2;
	CGuiLabel		m_wndTop3Label;
	CGuiTextCtrl	m_wndTop3;
	CGuiCheckBox	m_wndCassette2Label;
	CGuiTextCtrl	m_wndCassette2;
	CGuiLabel		m_wndCassette2Top1Label;
	CGuiTextCtrl	m_wndCassette2Top1;
	CGuiLabel		m_wndCassette2Top2Label;
	CGuiTextCtrl	m_wndCassette2Top2;
	CGuiLabel		m_wndCassette2Top3Label;
	CGuiTextCtrl	m_wndCassette2Top3;
	CGuiLabel		m_wndGiaLabel;
	CGuiNumberCtrl	m_wndGia;
	CGuiLabel		m_wndViTri;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szNgayChocHut;
	long	m_nSoPhoiTru;
	CString	m_szNguoiTru;
	long	m_nThung;
	BOOL	m_bCassette1Label;
	CString	m_szCassette1;
	CString	m_szTop1;
	CString	m_szTop2;
	CString	m_szTop3;
	BOOL	m_bCassette2Label;
	CString	m_szCassette2;
	CString	m_szCassette2Top1;
	CString	m_szCassette2Top2;
	CString	m_szCassette2Top3;
	long	m_nGia;
	//void			OnNgayChocHutChange(); 
	//void			OnNgayChocHutSetfocus(); 
	//void			OnNgayChocHutKillfocus(); 
	int			OnNgayChocHutCheckValue(); 
	//void			OnSoPhoiTruChange(); 
	//void			OnSoPhoiTruSetfocus(); 
	//void			OnSoPhoiTruKillfocus(); 
	int			OnSoPhoiTruCheckValue(); 
	//void			OnNguoiTruChange(); 
	//void			OnNguoiTruSetfocus(); 
	//void			OnNguoiTruKillfocus(); 
	int			OnNguoiTruCheckValue(); 
	//void			OnThungChange(); 
	//void			OnThungSetfocus(); 
	//void			OnThungKillfocus(); 
	int			OnThungCheckValue(); 
	void			OnCassette1LabelSelect(); 
	//void			OnCassette1Change(); 
	//void			OnCassette1Setfocus(); 
	//void			OnCassette1Killfocus(); 
	int			OnCassette1CheckValue(); 
	//void			OnTop1Change(); 
	//void			OnTop1Setfocus(); 
	//void			OnTop1Killfocus(); 
	int			OnTop1CheckValue(); 
	//void			OnTop2Change(); 
	//void			OnTop2Setfocus(); 
	//void			OnTop2Killfocus(); 
	int			OnTop2CheckValue(); 
	//void			OnTop3Change(); 
	//void			OnTop3Setfocus(); 
	//void			OnTop3Killfocus(); 
	int			OnTop3CheckValue(); 
	void			OnCassette2LabelSelect(); 
	//void			OnCassette2Change(); 
	//void			OnCassette2Setfocus(); 
	//void			OnCassette2Killfocus(); 
	int			OnCassette2CheckValue(); 
	//void			OnCassette2Top1Change(); 
	//void			OnCassette2Top1Setfocus(); 
	//void			OnCassette2Top1Killfocus(); 
	int			OnCassette2Top1CheckValue(); 
	//void			OnCassette2Top2Change(); 
	//void			OnCassette2Top2Setfocus(); 
	//void			OnCassette2Top2Killfocus(); 
	int			OnCassette2Top2CheckValue(); 
	//void			OnCassette2Top3Change(); 
	//void			OnCassette2Top3Setfocus(); 
	//void			OnCassette2Top3Killfocus(); 
	int			OnCassette2Top3CheckValue(); 
	//void			OnGiaChange(); 
	//void			OnGiaSetfocus(); 
	//void			OnGiaKillfocus(); 
	int			OnGiaCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CIVFPhieuTheoDoiTruRaPhoiDialog(CWnd *pParent);
	~CIVFPhieuTheoDoiTruRaPhoiDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuTheoDoiTruRaPhoiDialog(); 
	int OnEditIVFPhieuTheoDoiTruRaPhoiDialog(); 
	int OnDeleteIVFPhieuTheoDoiTruRaPhoiDialog(); 
	int OnSaveIVFPhieuTheoDoiTruRaPhoiDialog(); 
	int OnCancelIVFPhieuTheoDoiTruRaPhoiDialog(); 
	int OnIVFPhieuTheoDoiTruRaPhoiDialogListLoadData(); 
};
#endif
