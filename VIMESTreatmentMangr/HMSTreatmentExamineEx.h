#ifndef HMSTREATMENTEXAMINEEX_H
#define HMSTREATMENTEXAMINEEX_H

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
#include "GridListView.h"
#include "HTMLayoutCtrl.h"


class CHTMLBenhtrinh: public CHTMLayoutCtrl
{
public:
	CHTMLBenhtrinh();
	~CHTMLBenhtrinh();
	void LoadData(long nDocno, long nTreatIdx, CString szWhere, CString szOrderBy);
	void OnPrint(CDC *pDC, CPrintInfo* pInfo);
	void PrintPreview();

};


class CHMSTreatmentExamineEx : public CGuiView{
protected:
public:
	CHTMLBenhtrinh	m_wndHtml;
	CGuiListCtrl	m_wndList;
	CGuiComboBox	m_wndSelect;
	CGuiLabel		m_wndSelectLabel;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSearch;
	CString m_szSelectKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString m_szWhere;
	CString m_szOrderBy;

	CWnd* m_pWndBenhTrinh;
	
	int		m_nListWidth;
	long	n_treatIDX;
	long			LoadTreatInfo(); 
	long			OnExamineListLoadData(); 
	void			OnExamineListSelectChange(int nOldItem, int nNewItem); 
	void			OnExamineListDblClick(); 
	int			OnExamineListDeleteItem(); 
	void		RefreshData();
	CHMSTreatmentExamineEx();
	~CHMSTreatmentExamineEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentExamineEx(); 
	int OnEditHMSTreatmentExamineEx(); 
	int OnDeleteHMSTreatmentExamineEx(); 
	int OnSaveHMSTreatmentExamineEx(); 
	int OnCancelHMSTreatmentExamineEx(); 
	int OnHMSTreatmentExamineExListLoadData(); 
	void			OnSelectSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnSelectSelendok();
	//void			OnSelectSetfocus(); 
	//void			OnSelectKillfocus(); 
	long			OnSelectLoadData();
	//void			OnSelectAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue();
	void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	void			OnToDateKillfocus(); 
	int			OnToDateCheckValue();
	void			OnAddSelect();
	void			OnEditSelect();
	void			OnPrintSelect();
	void			OnSearchSelect();
	void LoadDrugList(long nTreatIDX);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
