#ifndef HMSOPERATIONSEQUENCEVIEW_H
#define HMSOPERATIONSEQUENCEVIEW_H

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
class CHMSOperationSequenceView : public CGuiView{
protected:
public:
	CWnd*	m_wndOrderList;
	CGuiButton		m_wndAddSequence;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndFormImage;
	CGuiTextCtrl	m_wndSequence;
	CGuiPictureCtrl	m_wndImage;
	CString	m_szSequence;
	CString	m_szSequenceOld;
	CString	m_szImage;

	CString m_szPath;
	CString m_szItemID;
	CString m_szFileName;
	CString m_szPathName;
	CString m_szType;
	CDbfMap	m_hms_operationTbl;

	bool	m_bVideo;
	long	m_nDocumentNo;
	long	m_nOrderID;
	int		m_nFrame;

	BOOL AddImage(CString szFileName);
	BOOL RemoveImage(CString szFileName);
	BOOL EditImage(CString szFileName);
	void ResizeImage(CString srcPath, CString destPath);
	void Load(long nOID, CString szItemID);
	BOOL OnLoadImage(long nDocno, long nOrderid, CString szItemID);

	void			OnAddSelect(); 
	void			OnConfirmSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnAddSequenceSelect();
	void			OnFormImageSelect();

	//void			OnSequenceChange(); 
	//void			OnSequenceSetfocus(); 
	//void			OnSequenceKillfocus(); 
	int			OnSequenceCheckValue(); 
	//void			OnImageChange(); 
	//void			OnImageSetfocus(); 
	//void			OnImageKillfocus(); 
	int			OnImageCheckValue(); 
	CHMSOperationSequenceView();
	~CHMSOperationSequenceView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationSequenceView(); 
	int OnEditHMSOperationSequenceView(); 
	int OnDeleteHMSOperationSequenceView(); 
	int OnSaveHMSOperationSequenceView(); 
	int OnCancelHMSOperationSequenceView(); 
	int OnHMSOperationSequenceViewListLoadData(); 
};
#endif
