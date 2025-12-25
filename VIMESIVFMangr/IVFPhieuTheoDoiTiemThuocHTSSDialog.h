#ifndef IVFPHIEUTHEODOITIEMTHUOCHTSSDIALOG_H
#define IVFPHIEUTHEODOITIEMTHUOCHTSSDIALOG_H

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
#include "GridListView.h"

class CIVFPhieuTheoDoiTiemThuocHTSSDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndTongsothuocguidot1Label;
	CGuiTextCtrl	m_wndTongsothuocguidot1;
	CGuiLabel		m_wndHopso1Label;
	CGuiNumberCtrl	m_wndHopso1;
	CGuiLabel		m_wndNgay1Label;
	CGuiDateCtrl	m_wndNgay1;
	CGuiLabel		m_wndTongsothuocguidot2Label;
	CGuiTextCtrl	m_wndTongsothuocguidot2;
	CGuiLabel		m_wndHopso2Label;
	CGuiNumberCtrl	m_wndHopso2;
	CGuiLabel		m_wndNgay2Label;
	CGuiDateCtrl	m_wndNgay2;
	CGuiLabel		m_wndTongsothuocguidotLabel;
	CGuiTextCtrl	m_wndTongsothuocguidot;
	CGuiLabel		m_wndHopso3Label;
	CGuiNumberCtrl	m_wndHopso3;
	CGuiLabel		m_wndNgay3Label;
	CGuiDateCtrl	m_wndNgay3;
	CGuiLabel		m_wndTongsothuocguidot4Label;
	CGuiTextCtrl	m_wndTongsothuocguidot4;
	CGuiLabel		m_wndHopso4Label;
	CGuiNumberCtrl	m_wndHopso4;
	CGuiLabel		m_wndNgay4Label;
	CGuiDateCtrl	m_wndNgay4;
	CGuiLabel		m_wndTongsothuocguidot5Label;
	CGuiTextCtrl	m_wndTongsothuocguidot5;
	CGuiLabel		m_wndHopso5Label;
	CGuiNumberCtrl	m_wndHopso5;
	CGuiLabel		m_wndNgay5Label;
	CGuiDateCtrl	m_wndNgay5;
	CGridListView	m_wndList;
	CString	m_szTongsothuocguidot1;
	long	m_nHopso1;
	CString	m_szNgay1;
	CString	m_szTongsothuocguidot2;
	long	m_nHopso2;
	CString	m_szNgay2;
	CString	m_szTongsothuocguidot;
	long	m_nHopso3;
	CString	m_szNgay3;
	CString	m_szTongsothuocguidot4;
	long	m_nHopso4;
	CString	m_szNgay4;
	CString	m_szTongsothuocguidot5;
	long	m_nHopso5;
	CString	m_szNgay5;
	//void			OnTongsothuocguidot1Change(); 
	//void			OnTongsothuocguidot1Setfocus(); 
	//void			OnTongsothuocguidot1Killfocus(); 
	int			OnTongsothuocguidot1CheckValue(); 
	//void			OnHopso1Change(); 
	//void			OnHopso1Setfocus(); 
	//void			OnHopso1Killfocus(); 
	int			OnHopso1CheckValue(); 
	//void			OnNgay1Change(); 
	//void			OnNgay1Setfocus(); 
	//void			OnNgay1Killfocus(); 
	int			OnNgay1CheckValue(); 
	//void			OnTongsothuocguidot2Change(); 
	//void			OnTongsothuocguidot2Setfocus(); 
	//void			OnTongsothuocguidot2Killfocus(); 
	int			OnTongsothuocguidot2CheckValue(); 
	//void			OnHopso2Change(); 
	//void			OnHopso2Setfocus(); 
	//void			OnHopso2Killfocus(); 
	int			OnHopso2CheckValue(); 
	//void			OnNgay2Change(); 
	//void			OnNgay2Setfocus(); 
	//void			OnNgay2Killfocus(); 
	int			OnNgay2CheckValue(); 
	//void			OnTongsothuocguidotChange(); 
	//void			OnTongsothuocguidotSetfocus(); 
	//void			OnTongsothuocguidotKillfocus(); 
	int			OnTongsothuocguidotCheckValue(); 
	//void			OnHopso3Change(); 
	//void			OnHopso3Setfocus(); 
	//void			OnHopso3Killfocus(); 
	int			OnHopso3CheckValue(); 
	//void			OnNgay3Change(); 
	//void			OnNgay3Setfocus(); 
	//void			OnNgay3Killfocus(); 
	int			OnNgay3CheckValue(); 
	//void			OnTongsothuocguidot4Change(); 
	//void			OnTongsothuocguidot4Setfocus(); 
	//void			OnTongsothuocguidot4Killfocus(); 
	int			OnTongsothuocguidot4CheckValue(); 
	//void			OnHopso4Change(); 
	//void			OnHopso4Setfocus(); 
	//void			OnHopso4Killfocus(); 
	int			OnHopso4CheckValue(); 
	//void			OnNgay4Change(); 
	//void			OnNgay4Setfocus(); 
	//void			OnNgay4Killfocus(); 
	int			OnNgay4CheckValue(); 
	//void			OnTongsothuocguidot5Change(); 
	//void			OnTongsothuocguidot5Setfocus(); 
	//void			OnTongsothuocguidot5Killfocus(); 
	int			OnTongsothuocguidot5CheckValue(); 
	//void			OnHopso5Change(); 
	//void			OnHopso5Setfocus(); 
	//void			OnHopso5Killfocus(); 
	int			OnHopso5CheckValue(); 
	//void			OnNgay5Change(); 
	//void			OnNgay5Setfocus(); 
	//void			OnNgay5Killfocus(); 
	int			OnNgay5CheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFPhieuTheoDoiTiemThuocHTSSDialog(CWnd *pParent);
	~CIVFPhieuTheoDoiTiemThuocHTSSDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuTheoDoiTiemThuocHTSSDialog(); 
	int OnEditIVFPhieuTheoDoiTiemThuocHTSSDialog(); 
	int OnDeleteIVFPhieuTheoDoiTiemThuocHTSSDialog(); 
	int OnSaveIVFPhieuTheoDoiTiemThuocHTSSDialog(); 
	int OnCancelIVFPhieuTheoDoiTiemThuocHTSSDialog(); 
	int OnIVFPhieuTheoDoiTiemThuocHTSSDialogListLoadData(); 
};
#endif
