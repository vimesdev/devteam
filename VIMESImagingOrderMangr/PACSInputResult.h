#ifndef CPACSInputResult_H
#define CPACSInputResult_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CPACSInputResult : public CGuiView{
protected:
	bool	m_bCreated;
	bool	m_bInited;
public:
	long	m_nDocumentNo;
	long	m_nOrderID;
	long	m_nOrderlineID;
	long	m_nIndex;
	CString	m_szItemID;
	CString	m_szFormID;
	CString	m_szRemark;
	CString	m_szConclusion;
	int		m_nPerformedRoom_ID;
	CString     m_szSerialCode;

	struct ControlProp{
		CString szType;
		CString szCaption;
		CString szName;
		CString szDefValue;
		CString	arrayString;
		CString szValue;
		int		nTypeCtrl;
		int		nX;
		int		nY;
		int		nWidth;
		int		nHeight;
		int		nMultiline;
		CWnd*	pWnd;
	};

	CArray<ControlProp, ControlProp&> aControls;
	CStringArray	m_arItems;
	CWnd*	m_pWndFocus;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;

	CString			m_szDeptType;
	
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	//void			OnConclutionChange(); 
	//void			OnConclutionSetfocus(); 
	//void			OnConclutionKillfocus(); 
	int			OnConclutionCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnComboLoadData();
	CPACSInputResult();
	~CPACSInputResult();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int		SetMode(int nMode);
	void	SetReference(long nOrderID, CString szItemID, CString szFormID);

	int OnAddCPACSInputResult(); 
	int OnEditCPACSInputResult(); 
	int OnDeleteCPACSInputResult(); 
	int OnSaveCPACSInputResult(); 
	int OnCancelCPACSInputResult(); 
	int OnCPACSInputResultListLoadData(); 
	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
