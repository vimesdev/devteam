#ifndef CVIMESPictureView_H
#define CVIMESPictureView_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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


class CVIMESPictureView : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupPricture;
	CGuiGroupBox	m_wndSetup;
	CGuiGroupBox	m_wndBrightness;
	CGuiGroupBox	m_wndGroupProperties;
	
	CSliderCtrl		m_wndGreen;
	CSliderCtrl		m_wndBlue;
	CSliderCtrl		m_wndRed;
	CGuiCheckBox	m_wndBlackandWhite;
	CGuiCheckBox	m_wndInvertColor;
	CGuiLabel		m_wndCommentLabel;
	CGuiTextCtrl	m_wndComment;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndRestore;
	CSliderCtrl		m_wndContrast;
	CGuiButton		m_wndLast;
	CGuiButton		m_wndNext;
	CGuiLabel		m_wndBlueLabel;
	CGuiLabel		m_wndGreenLabel;
	CGuiLabel		m_wndRedLabel;
	CGuiLabel		m_wndRedPost;
	CGuiLabel		m_wndGreenPost;
	CGuiLabel		m_wndBluePost;
	CGuiLabel		m_wndContrastLabel;
	CGuiLabel		m_wndContrastPostLabel;
	CGuiCheckBox	m_wndBlur;
	CGuiCheckBox	m_wndSharpness;
	CGuiLabel		m_wndDimensionsLabel;
	CGuiTextCtrl	m_wndDimensions;
	CGuiLabel		m_wndCurrentImageLabel;
	CGuiTextCtrl	m_wndCurrentImage;
	BOOL	m_bBlackandWhite;
	BOOL	m_bInvertColor;
	CString	m_szComment;
	BOOL	m_bBlur;
	BOOL	m_bSharpness;
	CString	m_szDimensions;
	CString	m_szCurrentImage;
	CString m_szFileName;
	

	// Memory bitmap
	HBITMAP m_hBitmap;
	HDC m_hMemDC;
	RECT m_Rect;
	
	bool m_bLoadImage;
	int	m_nBlue;
	int m_nRed;
	int m_nGreen;
	int	m_nContrast;

	int	m_nBluePost;
	int m_nRedPost;
	int m_nGreenPost;
	int	m_nContrastPost;

	int m_nXScrollPos;
	int m_nYScrollPos;

	int GetImageWidth();
	// Get the Image Height
	int GetImageHeight();
	// Load the image
	HDC LoadImage(HDC hDC, CString pszImageName, RECT &r);

	void			OnBlackandWhiteSelect(); 
	void			OnInvertColorSelect(); 
	void			OnGreenSelect(); 
	void			OnBlueSelect(); 
	void			OnRedSelect(); 
	//void			OnCommentChange(); 
	//void			OnCommentSetfocus(); 
	//void			OnCommentKillfocus(); 
	int			OnCommentCheckValue(); 
	
	void			OnApplySelect(); 
	void			OnRestoreSelect(); 
	void			OnContrastSelect(); 
	void			OnLastSelect(); 
	void			OnNextSelect(); 
	void			OnBlurSelect(); 
	void			OnSharpnessSelect(); 
	//void			OnDimensionsChange(); 
	//void			OnDimensionsSetfocus(); 
	//void			OnDimensionsKillfocus(); 
	int			OnDimensionsCheckValue(); 
	//void			OnCurrentImageChange(); 
	//void			OnCurrentImageSetfocus(); 
	//void			OnCurrentImageKillfocus(); 
	int			OnCurrentImageCheckValue(); 
	CVIMESPictureView(CWnd *pParent);
	~CVIMESPictureView();

	void DisplayBlur(HDC hDC, RECT &r);
	void DisplaySharpness(HDC hDC, RECT &r);
	void DisplayInvertColor(HDC hDC, RECT &r);
	void DisplayBlackAndWhite(HDC hDC, RECT &r);
	void DisplayContrast(HDC hDC, RECT &r, int nContrastVal);	
	void DisplayBrightness(HDC hDC, RECT &r, int nRedVal, int nGreenVal, int nBlueVal);
	void ScaleTransformZoom(HDC hdc);
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESPictureView(); 
	int OnEditVIMESPictureView(); 
	int OnDeleteVIMESPictureView(); 
	int OnSaveVIMESPictureView(); 
	int OnCancelVIMESPictureView(); 
	int OnVIMESPictureViewListLoadData();
//	bool	SetBrightness(Bitmap* bmp, long nBrightness);
//	bool	SetContrast(Bitmap* bmp, int nContrast);

	
private:
	// For GDI plus
	//GdiplusStartupInput m_gdiplusStartupInput;
	ULONG_PTR	m_gdiplusToken;

	// Image width and height
	int m_nWidth;
	int m_nHeight;
	int m_nWidthImage;
	int m_nHeightImage;
	


public:

	// Generated message map functions
	
	/*afx_msg void OnCustomdrawSliderRed(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderGreen(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCustomdrawSliderBlue(NMHDR* pNMHDR, LRESULT* pResult);*/
	afx_msg void OnPaint();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	DECLARE_MESSAGE_MAP()
};
#endif
