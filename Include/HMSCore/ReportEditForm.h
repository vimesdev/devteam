#ifndef CReportEditForm_H
#define CReportEditForm_H

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

typedef struct tagFieldInfo{
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
		BOOL	bMultiLine;
		BOOL	bReadOnly;
		BOOL	bRequire;
		CWnd*	pWnd;
		tagFieldInfo(){
			bMultiLine = FALSE;
			pWnd = NULL;
			bReadOnly = FALSE;
			bRequire = FALSE;
		}
}FieldInfo;



class  AFX_EXT_CLASS CReportEditForm : public CGuiView{
protected:
	bool	m_bCreated;
	bool	m_bInited;
	int		m_yRepos;

	FieldInfo* fromReportItem(void* obj);
	void	initReportSection(void* section);

public:
	CString m_szFileName;
	
	CArray<FieldInfo*, FieldInfo*> m_arFields;
	CMap<UINT, UINT, FieldInfo*,FieldInfo*>	m_arActions;

	CWnd*			m_pWndFocus;
	
	
	CReportEditForm();
	~CReportEditForm();
	virtual void	Init(LPCTSTR lpszFile);
	virtual void	OnInitFields(){}

	virtual void OnCreateComponents();
	virtual void OnInitializeComponents();
	virtual void OnSetWindowEvents();
	virtual void GetDataToScreen();
	virtual void GetScreenToData();
	virtual void SetDefaultValues();
	virtual int		SetMode(int nMode);
	//Hàm thêm các nút button(Add, edit, delete, cancel, save, print...)
	int		AddButton(LPCTSTR lpszCaption, UINT nID, void* callback=NULL);
	
	void	SetValue(CString szName, CString szData);
	void	GetValue(CString szName, CString& szData);

	void	SetType(LPCTSTR lpszName, int nType);
	void	SetReadOnly(LPCTSTR lpszName, BOOL bFlag=TRUE);
	void	SetRequire(LPCTSTR lpszName, BOOL bFlag=TRUE);
	
	FieldInfo* Get(LPCTSTR lpszName);

	virtual	void	OnComboLoadData();

	//Hàm cho phép lưu dữ liệu từ các control vào biến json: m_jData hoặc ngược lại
	virtual void UpdateData(BOOL bSaveAndValidate=TRUE);
	afx_msg void OnDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

	//Ham gọi các sự kiện khi click vào các nút button(add, edit, delete, save...);
	//nID: Là giá trị ID của từng button khi được tạo
	virtual void OnClickEvent(UINT nID);
	
	virtual void Print(BOOL bPreview=TRUE);

public:
	DECLARE_MESSAGE_MAP()

	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
