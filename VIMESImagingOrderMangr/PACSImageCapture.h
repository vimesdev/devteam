#ifndef PACSIMAGECAPTURE_H
#define PACSIMAGECAPTURE_H

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
#include "GuiView.h"
#include "DbField.h"
#include "ListImage.h"
#include "ThumbnailImage.h"
#include "GuiPictureCtrl.h"
#include "libcapvideo.h"

enum CAPTURE_DEVICE {
	CAP_VIDEO =0,
	CAP_AVER = 1,
	CAP_OBS =2
};


class CAverCapture : public CWnd{
	DECLARE_DYNAMIC(CAverCapture)

public:
	HANDLE m_hCaptureDevice;
	WCHAR m_wcDeviceName[MAX_PATH];
	DWORD m_dwDeviceNum;
	BOOL	m_bIsStartStreaming;


	CAverCapture();
	~CAverCapture();
	LONG Init();
	LONG StartStreaming();
	LONG StopStreaming();
	LONG CaptureImage(LPCTSTR lpszFilePath);
	void Setting();
	BOOL CAverCapture::PreCreateWindow(CREATESTRUCT& cs) ;
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMove(int x, int y);

	DECLARE_MESSAGE_MAP()
};


class CPACSImageCapture : public CGuiView{
protected:
	bool	m_bCaptured;
	int		m_nDeviceID;	
	int		m_nCaptureMode;
	bool	m_bStop;
	
	CRectTracker	m_tracker;
	BYTE*	m_pBuffer;
	long	m_nSize;
	CString m_szImagePath;
	CString m_szCurrentDirectory;
	CString m_szImageCapturePath;
	void	SyncImages();
	int		m_nFrame;
public:
	int		m_nDeviceType;
	CStringArray	m_devides;

	CWnd*	m_pWndFocus;
	long	m_nDocumentNo;
	long	m_nOrderID;
	long	m_nOrderLine;
	int		m_nCount;
	CString	m_szItemID;
	CString	m_szPatientName;
	CString m_szSex;
	CString	m_szBirthDate;
	CString m_szAddress;
	
	bool	m_bIsAverCapture;
	
	bool	m_bMarkAll;
	CThumbnailImage		m_wndThumb;

	int			m_nWidth;
	int			m_nHeight;
	CVIMESCaptureVideo	m_wndVideo;
	CAverCapture*		m_pAverCapture;

	CGuiPictureCtrl	m_wndImage;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndCapture;
	CGuiButton		m_wndStart;
	CGuiButton		m_wndBack;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndSetupVideo;
	CGuiButton		m_wndAddIMG;
	CGuiButton		m_wndImageFolder;
	CGuiButton		m_wndStop;

	long			OnImageCaptureLoadData(); 
	void			OnImageCaptureSelectChange(int nOldItem, int nNewItem); 
	void			OnImageCaptureDblClick(); 
	int			OnImageCaptureDeleteItem(); 
	void			OnImageSelectChange(int nOld, int nNew); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnMarkAllSelect(); 
	void			OnCaptureSelect(); 
	void			OnBackSelect();
	void			OnSaveSelect(); 
	void		OnImageFolderSelect();

	void		RestartCapture();
	void		StartCapture();
	void		StopCapture();

	void		OnSetupVideo();
	void		OnAddIMGSelect();

	void		CreateAverCapture();

	void		OnBack();
	void		OnLoadThumb();
	void		SetReference(LPCTSTR lpszDir, long nDocumentNo, long nOrderID, CString szItemID);

	BOOL AddImage(CString szFileName);
	BOOL RemoveImage(CString szFileName);
	BOOL DownloadImage();

	CPACSImageCapture();
	~CPACSImageCapture();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSImageCapture(); 
	int OnEditPACSImageCapture(); 
	int OnDeletePACSImageCapture(); 
	int OnSavePACSImageCapture(); 
	int OnCancelPACSImageCapture(); 
	int OnPACSImageCaptureListLoadData(); 
	void UploadQueue();
	void Capture_OBS();
	void OnResizeLayout();

	virtual BOOL PreTranslateMessage(MSG *pMsg);	
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()

	afx_msg void OnTimer(UINT nIDEvent);
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
#endif
