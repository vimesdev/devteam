#ifndef DOPPLERPELVICLIMBVEIN_H
#define DOPPLERPELVICLIMBVEIN_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CDopplerPelvicLimbVein : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndcontrol_62;
	CGuiGroupBox	m_wndcontrol_63;
	CGuiLabel		m_wndVeins;
	CGuiLabel		m_wndVeinUnderPurlin;
	CGuiLabel		m_wndBaseVein;
	CGuiLabel		m_wndBaseVien2;
	CGuiLabel		m_wndVienOfHead;
	CGuiLabel		m_wndVienOfHead2;
	CGuiLabel		m_wndVienOfMidForearm;
	CGuiLabel		m_wndVienOfMidForearm2;
	CGuiLabel		m_wndDorsumOrHandBowVien;
	CGuiLabel		m_wndDorsumOrHandBowVien2;
	CGuiLabel		m_wndParameter;
	CGuiLabel		m_wndParameter2;
	CGuiLabel		m_wndDiameter;
	CGuiLabel		m_wndDiameter2;
	CGuiLabel		m_wndFlow;
	CGuiLabel		m_wndFlow2;
	CGuiLabel		m_wndBackOverFlow;
	CGuiLabel		m_wndBackOverFlow2;
	CGuiLabel		m_wndOtherCharacteristic;
	CGuiLabel		m_wndOtherCharacteristic2;
	CGuiTextCtrl	m_wnd1;
	CGuiTextCtrl	m_wnd2;
	CGuiTextCtrl	m_wnd3;
	CGuiTextCtrl	m_wnd4;
	CGuiTextCtrl	m_wnd5;
	CGuiTextCtrl	m_wnd6;
	CGuiTextCtrl	m_wnd7;
	CGuiTextCtrl	m_wnd8;
	CGuiTextCtrl	m_wnd9;
	CGuiTextCtrl	m_wnd10;
	CGuiTextCtrl	m_wnd11;
	CGuiTextCtrl	m_wnd12;
	CGuiTextCtrl	m_wnd13;
	CGuiTextCtrl	m_wnd14;
	CGuiTextCtrl	m_wnd15;
	CGuiTextCtrl	m_wnd16;
	CGuiTextCtrl	m_wnd17;
	CGuiTextCtrl	m_wnd18;
	CGuiTextCtrl	m_wnd19;
	CGuiTextCtrl	m_wnd20;
	CGuiTextCtrl	m_wnd21;
	CGuiTextCtrl	m_wnd22;
	CGuiTextCtrl	m_wnd23;
	CGuiTextCtrl	m_wnd24;
	CGuiTextCtrl	m_wnd25;
	CGuiTextCtrl	m_wnd26;
	CGuiTextCtrl	m_wnd27;
	CGuiTextCtrl	m_wnd28;
	CGuiTextCtrl	m_wnd29;
	CGuiTextCtrl	m_wnd30;
	CGuiTextCtrl	m_wnd31;
	CGuiTextCtrl	m_wnd32;
	CGuiTextCtrl	m_wnd33;
	CGuiTextCtrl	m_wnd34;
	CGuiTextCtrl	m_wnd35;
	CGuiTextCtrl	m_wnd36;
	CGuiTextCtrl	m_wnd37;
	CGuiTextCtrl	m_wnd38;
	CGuiTextCtrl	m_wnd39;
	CGuiTextCtrl	m_wnd40;
	CGuiLabel		m_wndVeins2;
	CGuiLabel		m_wndVeinUnderPurlin2;
	CGuiLabel		m_wndLabel_64;
	CGuiTextCtrl	m_wndRemark;
	CGuiLabel		m_wndLabel_66;
	CGuiTextCtrl	m_wndConclusion;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_sz1;
	CString	m_sz2;
	CString	m_sz3;
	CString	m_sz4;
	CString	m_sz5;
	CString	m_sz6;
	CString	m_sz7;
	CString	m_sz8;
	CString	m_sz9;
	CString	m_sz10;
	CString	m_sz11;
	CString	m_sz12;
	CString	m_sz13;
	CString	m_sz14;
	CString	m_sz15;
	CString	m_sz16;
	CString	m_sz17;
	CString	m_sz18;
	CString	m_sz19;
	CString	m_sz20;
	CString	m_sz21;
	CString	m_sz22;
	CString	m_sz23;
	CString	m_sz24;
	CString	m_sz25;
	CString	m_sz26;
	CString	m_sz27;
	CString	m_sz28;
	CString	m_sz29;
	CString	m_sz30;
	CString	m_sz31;
	CString	m_sz32;
	CString	m_sz33;
	CString	m_sz34;
	CString	m_sz35;
	CString	m_sz36;
	CString	m_sz37;
	CString	m_sz38;
	CString	m_sz39;
	CString	m_sz40;
	CString	m_szRemark;
	CString	m_szConclusion;
	//void			On1Change(); 
	//void			On1Setfocus(); 
	//void			On1Killfocus(); 
	int			On1CheckValue(); 
	//void			On2Change(); 
	//void			On2Setfocus(); 
	//void			On2Killfocus(); 
	int			On2CheckValue(); 
	//void			On3Change(); 
	//void			On3Setfocus(); 
	//void			On3Killfocus(); 
	int			On3CheckValue(); 
	//void			On4Change(); 
	//void			On4Setfocus(); 
	//void			On4Killfocus(); 
	int			On4CheckValue(); 
	//void			On5Change(); 
	//void			On5Setfocus(); 
	//void			On5Killfocus(); 
	int			On5CheckValue(); 
	//void			On6Change(); 
	//void			On6Setfocus(); 
	//void			On6Killfocus(); 
	int			On6CheckValue(); 
	//void			On7Change(); 
	//void			On7Setfocus(); 
	//void			On7Killfocus(); 
	int			On7CheckValue(); 
	//void			On8Change(); 
	//void			On8Setfocus(); 
	//void			On8Killfocus(); 
	int			On8CheckValue(); 
	//void			On9Change(); 
	//void			On9Setfocus(); 
	//void			On9Killfocus(); 
	int			On9CheckValue(); 
	//void			On10Change(); 
	//void			On10Setfocus(); 
	//void			On10Killfocus(); 
	int			On10CheckValue(); 
	//void			On11Change(); 
	//void			On11Setfocus(); 
	//void			On11Killfocus(); 
	int			On11CheckValue(); 
	//void			On12Change(); 
	//void			On12Setfocus(); 
	//void			On12Killfocus(); 
	int			On12CheckValue(); 
	//void			On13Change(); 
	//void			On13Setfocus(); 
	//void			On13Killfocus(); 
	int			On13CheckValue(); 
	//void			On14Change(); 
	//void			On14Setfocus(); 
	//void			On14Killfocus(); 
	int			On14CheckValue(); 
	//void			On15Change(); 
	//void			On15Setfocus(); 
	//void			On15Killfocus(); 
	int			On15CheckValue(); 
	//void			On16Change(); 
	//void			On16Setfocus(); 
	//void			On16Killfocus(); 
	int			On16CheckValue(); 
	//void			On17Change(); 
	//void			On17Setfocus(); 
	//void			On17Killfocus(); 
	int			On17CheckValue(); 
	//void			On18Change(); 
	//void			On18Setfocus(); 
	//void			On18Killfocus(); 
	int			On18CheckValue(); 
	//void			On19Change(); 
	//void			On19Setfocus(); 
	//void			On19Killfocus(); 
	int			On19CheckValue(); 
	//void			On20Change(); 
	//void			On20Setfocus(); 
	//void			On20Killfocus(); 
	int			On20CheckValue(); 
	//void			On21Change(); 
	//void			On21Setfocus(); 
	//void			On21Killfocus(); 
	int			On21CheckValue(); 
	//void			On22Change(); 
	//void			On22Setfocus(); 
	//void			On22Killfocus(); 
	int			On22CheckValue(); 
	//void			On23Change(); 
	//void			On23Setfocus(); 
	//void			On23Killfocus(); 
	int			On23CheckValue(); 
	//void			On24Change(); 
	//void			On24Setfocus(); 
	//void			On24Killfocus(); 
	int			On24CheckValue(); 
	//void			On25Change(); 
	//void			On25Setfocus(); 
	//void			On25Killfocus(); 
	int			On25CheckValue(); 
	//void			On26Change(); 
	//void			On26Setfocus(); 
	//void			On26Killfocus(); 
	int			On26CheckValue(); 
	//void			On27Change(); 
	//void			On27Setfocus(); 
	//void			On27Killfocus(); 
	int			On27CheckValue(); 
	//void			On28Change(); 
	//void			On28Setfocus(); 
	//void			On28Killfocus(); 
	int			On28CheckValue(); 
	//void			On29Change(); 
	//void			On29Setfocus(); 
	//void			On29Killfocus(); 
	int			On29CheckValue(); 
	//void			On30Change(); 
	//void			On30Setfocus(); 
	//void			On30Killfocus(); 
	int			On30CheckValue(); 
	//void			On31Change(); 
	//void			On31Setfocus(); 
	//void			On31Killfocus(); 
	int			On31CheckValue(); 
	//void			On32Change(); 
	//void			On32Setfocus(); 
	//void			On32Killfocus(); 
	int			On32CheckValue(); 
	//void			On33Change(); 
	//void			On33Setfocus(); 
	//void			On33Killfocus(); 
	int			On33CheckValue(); 
	//void			On34Change(); 
	//void			On34Setfocus(); 
	//void			On34Killfocus(); 
	int			On34CheckValue(); 
	//void			On35Change(); 
	//void			On35Setfocus(); 
	//void			On35Killfocus(); 
	int			On35CheckValue(); 
	//void			On36Change(); 
	//void			On36Setfocus(); 
	//void			On36Killfocus(); 
	int			On36CheckValue(); 
	//void			On37Change(); 
	//void			On37Setfocus(); 
	//void			On37Killfocus(); 
	int			On37CheckValue(); 
	//void			On38Change(); 
	//void			On38Setfocus(); 
	//void			On38Killfocus(); 
	int			On38CheckValue(); 
	//void			On39Change(); 
	//void			On39Setfocus(); 
	//void			On39Killfocus(); 
	int			On39CheckValue(); 
	//void			On40Change(); 
	//void			On40Setfocus(); 
	//void			On40Killfocus(); 
	int			On40CheckValue(); 
	//void			OnRemarkChange(); 
	//void			OnRemarkSetfocus(); 
	//void			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CDopplerPelvicLimbVein();
	~CDopplerPelvicLimbVein();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddDopplerPelvicLimbVein(); 
	int OnEditDopplerPelvicLimbVein(); 
	int OnDeleteDopplerPelvicLimbVein(); 
	int OnSaveDopplerPelvicLimbVein(); 
	int OnCancelDopplerPelvicLimbVein(); 
	int OnDopplerPelvicLimbVeinListLoadData(); 
};
#endif
