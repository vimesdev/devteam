#ifndef HMSMAPCIRCULAR_H
#define HMSMAPCIRCULAR_H

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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CHMSMapcircular : public CGuiView{
protected:
public:
	CGuiLabel		m_wndFeeIDLabel;
	CGuiTextCtrl	m_wndFeeID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndCircular50thLabel;
	CGuiTextCtrl	m_wndCircular50th;
	CGuiGroupBox	m_wndMapCircular;
	CGuiLabel		m_wndCircular37thLabel;
	CGuiComboBox	m_wndCircular37th;
	CGuiButton		m_wndAddCircular;
	CGuiLabel		m_wndMapIdLabel;
	CGuiMaskCtrl	m_wndMapId;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szFeeID;
	CString	m_szName;
	CString	m_szCircular50th;
	CString	m_szCircular37thKey;
	CString	m_szMapId;
	CDbfMap	m_tbl_hms_circular_map;
	int m_nStyle;
	//void			OnFeeIDChange(); 
	//void			OnFeeIDSetfocus(); 
	//void			OnFeeIDKillfocus(); 
	int			OnFeeIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnCircular50thChange(); 
	//void			OnCircular50thSetfocus(); 
	//void			OnCircular50thKillfocus(); 
	int			OnCircular50thCheckValue(); 
	void			OnCircular37thSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCircular37thSelendok(); 
	//void			OnCircular37thSetfocus(); 
	//void			OnCircular37thKillfocus(); 
	long			OnCircular37thLoadData(); 
	//void			OnCircular37thAddNew(); 
	void			OnAddCircularSelect(); 
	//void			OnMapIdChange(); 
	//void			OnMapIdSetfocus(); 
	//void			OnMapIdKillfocus(); 
	int			OnMapIdCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSMapcircular();
	~CHMSMapcircular();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMapcircular(); 
	int OnEditHMSMapcircular(); 
	int OnDeleteHMSMapcircular(); 
	int OnSaveHMSMapcircular(); 
	int OnCancelHMSMapcircular(); 
	int OnHMSMapcircularListLoadData(); 
	void SetMaskData();
	void OnExportMappedItem();
	void OnUnmapItem();
};
#endif
