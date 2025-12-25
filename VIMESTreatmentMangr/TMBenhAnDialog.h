#ifndef TMBENHANDIALOG_H
#define TMBENHANDIALOG_H

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

#include "PhanHoiBenh.h"
#include "PhanKhamBenh.h"
#include "PhanKhamChuyenKhoa.h"
#include "PhanKetLuan.h"
#include "PhanKetLuan_UngThuTuLan2.h"

class CTMBenhAnDialog : public CGuiDialog{
protected:


public:
	CGuiTabCtrl	m_wndTab;
	CPhanHoiBenh	m_wndPhanHoiBenh;
	CPhanKhamBenh	m_wndPhanKhamBenh;
	CPhanKhamChuyenKhoa	m_wndChuyenKhoa;
	CPhanKetLuan	m_wndPhanKetLuan;
	CPhanKetLuan_UngThuTuLan2	m_wndPhanKetLuan_UngThuTuLan2;
	CGuiButton		m_wndTreatTime;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	
	int		m_nMode;
	long	m_nDocNo;
	CString		m_szRecordNo;
	CString         m_szCancer;
	int             m_nHtrIdx;
	int             m_nCancerTime;
	int		m_nTreatTime;

	int			OnTabSelectChange(int nOld, int nNew); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnTreatTimeSelect();
	CTMBenhAnDialog(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo, CString szCancer, int nHtrIdx, int nCancerTime);
	~CTMBenhAnDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMBenhAnDialog(); 
	int OnEditTMBenhAnDialog(); 
	int OnDeleteTMBenhAnDialog(); 
	int OnSaveTMBenhAnDialog(); 
	int OnCancelTMBenhAnDialog(); 
	int OnTMBenhAnDialogListLoadData(); 
	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
