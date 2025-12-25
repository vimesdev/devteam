#ifndef IVFSPECIALITYDIALOG_H
#define IVFSPECIALITYDIALOG_H

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

#include "HTMLForms.h"
#include "GridListView.h"

class CIVFSpecialityHtmlDialog : public CGuiDialog{
protected:
public:
	
	CString		m_szType;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	int			m_nRefIndex;
	int			m_nRoomID;
	bool		m_bFound;
	long		m_nOptIdx;
	CString		m_szOptKey;
	
	CGridListView	m_wndList;
	CGuiLabel		m_wndOptLabel;
	CGuiComboBox	m_wndOpt;
	CHTMLForms		m_wndHtml;
	
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndSumery;

	void			OnListSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnListSelendok(); 
	//void			OnListSetfocus(); 
	//void			OnListKillfocus(); 
	long			OnListLoadData(); 

	void			OnOptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOptSelendok(); 
	//void			OnOptSetfocus(); 
	//void			OnOptKillfocus(); 
	long			OnOptLoadData(); 

	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnAddSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnSumerySelect();
	CIVFSpecialityHtmlDialog(CWnd *pParent, CString szType);
	~CIVFSpecialityHtmlDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFSpecialityHtmlDialog(); 
	int OnEditIVFSpecialityHtmlDialog(); 
	int OnDeleteIVFSpecialityHtmlDialog(); 
	int OnSaveIVFSpecialityHtmlDialog(); 
	int OnCancelIVFSpecialityHtmlDialog(); 
	int OnIVFSpecialityHtmlDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void LoadSurgeryInfo(long nDocNo, int nIDx, long nOrderID);
	void LoadBasicInfo();
	void LoadDiagnostic();
	void LoadDeptRoomBed();
	void LoadClinicalRecord();

};
#endif
