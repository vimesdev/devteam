#ifndef PHIEUCHAMSOCBENHNHANTRUOCPHAUTHUAT_H
#define PHIEUCHAMSOCBENHNHANTRUOCPHAUTHUAT_H

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
class AFX_EXT_CLASS CPhieuChamSocBenhNhanTruocPhauThuat : public CGuiDialog{
protected:
	long			m_nDocumentNo;
	long			m_nRefIdx;
public:
	CGuiLabel		m_wndOperationNameLabel;
	CGuiComboBox	m_wndOperationName;
	CGuiGroupBox	m_wndcontrol_1;
	CGuiGroupBox	m_wndcontrol_2;
	CGuiLabel		m_wndcontrol_3;
	CGuiLabel		m_wndcontrol_4;
	CGuiLabel		m_wndcontrol_5;
	CGuiLabel		m_wndcontrol_6;
	CGuiLabel		m_wndcontrol_7;
	CGuiLabel		m_wndcontrol_8;
	CGuiLabel		m_wndcontrol_9;
	CGuiLabel		m_wndcontrol_10;
	CGuiLabel		m_wndcontrol_11;
	CGuiLabel		m_wndcontrol_12;
	CGuiLabel		m_wndcontrol_13;
	CGuiLabel		m_wndcontrol_14;
	CGuiLabel		m_wndcontrol_15;
	CGuiLabel		m_wndcontrol_16;
	CGuiLabel		m_wndcontrol_17;
	CGuiLabel		m_wndcontrol_18;
	CGuiLabel		m_wndcontrol_19;
	CGuiLabel		m_wndcontrol_20;
	CGuiLabel		m_wndcontrol_21;
	CGuiLabel		m_wndcontrol_22;
	CGuiLabel		m_wndcontrol_23;
	CGuiLabel		m_wndcontrol_24;
	CGuiLabel		m_wndcontrol_25;
	CGuiLabel		m_wndcontrol_26;
	CGuiLabel		m_wndcontrol_27;
	CGuiLabel		m_wndcontrol_28;
	CGuiLabel		m_wndcontrol_29;
	CGuiLabel		m_wndcontrol_30;
	CGuiLabel		m_wndcontrol_31;
	CGuiLabel		m_wndcontrol_32;
	CGuiLabel		m_wndcontrol_33;
	CGuiLabel		m_wndcontrol_34;
	CGuiLabel		m_wndcontrol_35;
	CGuiLabel		m_wndcontrol_36;
	CGuiLabel		m_wndcontrol_37;
	CGuiLabel		m_wndcontrol_38;
	CGuiLabel		m_wndcontrol_39;
	CGuiLabel		m_wndcontrol_40;
	CGuiLabel		m_wndcontrol_41;
	CGuiCheckBox	m_wndc1;
	CGuiCheckBox	m_wndc2;
	CGuiCheckBox	m_wndc3;
	CGuiCheckBox	m_wndc4;
	CGuiCheckBox	m_wndc5;
	CGuiCheckBox	m_wndc6;
	CGuiCheckBox	m_wndc7;
	CGuiCheckBox	m_wndc8;
	CGuiCheckBox	m_wndc9;
	CGuiCheckBox	m_wndc10;
	CGuiCheckBox	m_wndc11;
	CGuiCheckBox	m_wndc12;
	CGuiCheckBox	m_wndc13;
	CGuiCheckBox	m_wndc14;
	CGuiCheckBox	m_wndc15;
	CGuiCheckBox	m_wndc16;
	CGuiCheckBox	m_wndc17;
	CGuiCheckBox	m_wndc18;
	CGuiCheckBox	m_wndc19;
	CGuiCheckBox	m_wndc20;
	CGuiCheckBox	m_wndc21;
	CGuiCheckBox	m_wndc22;
	CGuiCheckBox	m_wndc23;
	CGuiCheckBox	m_wndc24;
	CGuiCheckBox	m_wndc25;
	CGuiCheckBox	m_wndc26;
	CGuiCheckBox	m_wndc27;
	CGuiCheckBox	m_wndc28;
	CGuiCheckBox	m_wndc29;
	CGuiCheckBox	m_wndc30;
	CGuiCheckBox	m_wndc31;
	CGuiCheckBox	m_wndc32;
	CGuiCheckBox	m_wndc33;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szOperationNameKey;
	BOOL	m_bc1;
	BOOL	m_bc2;
	BOOL	m_bc3;
	BOOL	m_bc4;
	BOOL	m_bc5;
	BOOL	m_bc6;
	BOOL	m_bc7;
	BOOL	m_bc8;
	BOOL	m_bc9;
	BOOL	m_bc10;
	BOOL	m_bc11;
	BOOL	m_bc12;
	BOOL	m_bc13;
	BOOL	m_bc14;
	BOOL	m_bc15;
	BOOL	m_bc16;
	BOOL	m_bc17;
	BOOL	m_bc18;
	BOOL	m_bc19;
	BOOL	m_bc20;
	BOOL	m_bc21;
	BOOL	m_bc22;
	BOOL	m_bc23;
	BOOL	m_bc24;
	BOOL	m_bc25;
	BOOL	m_bc26;
	BOOL	m_bc27;
	BOOL	m_bc28;
	BOOL	m_bc29;
	BOOL	m_bc30;
	BOOL	m_bc31;
	BOOL	m_bc32;
	BOOL	m_bc33;
	void			OnOperationNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperationNameSelendok(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	long			OnOperationNameLoadData(); 
	//void			OnOperationNameAddNew(); 
	void			Onc1Select(); 
	void			Onc2Select(); 
	void			Onc3Select(); 
	void			Onc4Select(); 
	void			Onc5Select(); 
	void			Onc6Select(); 
	void			Onc7Select(); 
	void			Onc8Select(); 
	void			Onc9Select(); 
	void			Onc10Select(); 
	void			Onc11Select(); 
	void			Onc12Select(); 
	void			Onc13Select(); 
	void			Onc14Select(); 
	void			Onc15Select(); 
	void			Onc16Select(); 
	void			Onc17Select(); 
	void			Onc18Select(); 
	void			Onc19Select(); 
	void			Onc20Select(); 
	void			Onc21Select(); 
	void			Onc22Select(); 
	void			Onc23Select(); 
	void			Onc24Select(); 
	void			Onc25Select(); 
	void			Onc26Select(); 
	void			Onc27Select(); 
	void			Onc28Select(); 
	void			Onc29Select(); 
	void			Onc30Select(); 
	void			Onc31Select(); 
	void			Onc32Select(); 
	void			Onc33Select(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CPhieuChamSocBenhNhanTruocPhauThuat(CWnd *pParent, int nMode, long nDocNo, int nRefIdx);
	~CPhieuChamSocBenhNhanTruocPhauThuat();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhieuChamSocBenhNhanTruocPhauThuat(); 
	int OnEditPhieuChamSocBenhNhanTruocPhauThuat(); 
	int OnDeletePhieuChamSocBenhNhanTruocPhauThuat(); 
	int OnSavePhieuChamSocBenhNhanTruocPhauThuat(); 
	int OnCancelPhieuChamSocBenhNhanTruocPhauThuat(); 
	int OnPhieuChamSocBenhNhanTruocPhauThuatListLoadData(); 
};
#endif
