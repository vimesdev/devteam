#ifndef HMS_OBADTPHOITACNGHENMANTINH_H
#define HMS_OBADTPHOITACNGHENMANTINH_H

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
#include "HMSBenhAnView.h"
class CHMS_OBADTPhoiTacNghenManTinh : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle;
	CGuiLabel		m_wndLanKhamLabel;
	CGuiTextCtrl	m_wndLanKham;
	CGuiLabel		m_wndNamLabel;
	CGuiNumberCtrl	m_wndNam;
	CGuiLabel		m_wndHoVaTenLabel;
	CGuiTextCtrl	m_wndHoVaTen;
	CGuiLabel		m_wndTuoiLabel;
	CGuiTextCtrl	m_wndTuoi;
	CGuiLabel		m_wndTienSu;
	CGuiLabel		m_wndHutThuocLaLabel;
	CGuiTextCtrl	m_wndHutThuocLa;
	CGuiLabel		m_wndSLThuocLa;
	CGuiLabel		m_wndBenhKhacLabel;
	CGuiTextCtrl	m_wndBenhKhac;
	CGuiLabel		m_wndTrieuChungChuQuan;
	CGuiLabel		m_wndSotLabel;
	CGuiTextCtrl	m_wndSot;
	CGuiCheckBox	m_wndHoKhan;
	CGuiCheckBox	m_wndHoDom;
	CGuiCheckBox	m_wndTucNguc;
	CGuiCheckBox	m_wndKhoTho;
	CGuiLabel		m_wndTrieuChungKhac2Label;
	CGuiTextCtrl	m_wndTrieuChungKhac2;
	CGuiLabel		m_wndKhamBenh;
	CGuiCheckBox	m_wndDaNiemMacHong;
	CGuiCheckBox	m_wndTimTai;
	CGuiCheckBox	m_wndPhu;
	CGuiLabel		m_wndMachLabel;
	CGuiTextCtrl	m_wndMach;
	CGuiLabel		m_wndHALabel;
	CGuiTextCtrl	m_wndHA;
	CGuiLabel		m_wndTanSoTimLabel;
	CGuiTextCtrl	m_wndTanSoTim;
	CGuiLabel		m_wndRRFNPhaiLabel;
	CGuiTextCtrl	m_wndRRFNPhai;
	CGuiLabel		m_wndTraiLabel;
	CGuiTextCtrl	m_wndRRFNTrai;
	CGuiLabel		m_wndTiengRalesPhoiLabel;
	CGuiTextCtrl	m_wndTiengRalesPhoi;
	CGuiLabel		m_wndViTriLabel;
	CGuiTextCtrl	m_wndViTri;
	CGuiLabel		m_wndTrieuChungKhacLabel;
	CGuiTextCtrl	m_wndTrieuChungKhac;
	CGuiLabel		m_wndXetNghiem;
	CGuiLabel		m_wndBCLabel;
	CGuiTextCtrl	m_wndBC;
	CGuiLabel		m_wndGL;
	CGuiLabel		m_wndGranLabel;
	CGuiTextCtrl	m_wndGran;
	CGuiLabel		m_wndpercent;
	CGuiLabel		m_wndHCLabel;
	CGuiTextCtrl	m_wndHC;
	CGuiLabel		m_wndGL2;
	CGuiLabel		m_wndHSTLabel;
	CGuiTextCtrl	m_wndHST;
	CGuiLabel		m_wndGL3;
	CGuiLabel		m_wndTCLabel;
	CGuiTextCtrl	m_wndTC;
	CGuiLabel		m_wndL;
	CGuiLabel		m_wndGlucoseLabel;
	CGuiTextCtrl	m_wndGlucose;
	CGuiLabel		m_wndMmolL;
	CGuiLabel		m_wndUreCreLabel;
	CGuiTextCtrl	m_wndUreCre;
	CGuiLabel		m_wndMmolL2;
	CGuiLabel		m_wndOTPTLabel;
	CGuiTextCtrl	m_wndOTPT;
	CGuiLabel		m_wndUL;
	CGuiLabel		m_wndlp1;
	CGuiLabel		m_wndlp2;
	CGuiLabel		m_wndmmHg;
	CGuiLabel		m_wndDo;
	CGuiLabel		m_wndVCLabel;
	CGuiTextCtrl	m_wndVC;
	CGuiLabel		m_wndpercent2;
	CGuiLabel		m_wndFEV1Label;
	CGuiTextCtrl	m_wndFEV1;
	CGuiLabel		m_wndpercent3;
	CGuiLabel		m_wndFEV1FVCLabel;
	CGuiTextCtrl	m_wndFEV1FVC;
	CGuiLabel		m_wndpercent4;
	CGuiLabel		m_wndXQPhoiLabel;
	CGuiTextCtrl	m_wndXQPhoi;
	CGuiLabel		m_wndXNKhacLabel;
	CGuiTextCtrl	m_wndXNKhac;
	long m_nDocumentNo;
	CString	m_szLanKham;
	long	m_nNam;
	CString	m_szHoVaTen;
	CString	m_szTuoi;
	CString	m_szHutThuocLa;
	CString	m_szBenhKhac;
	CString	m_szSot;
	BOOL	m_bHoKhan;
	BOOL	m_bHoDom;
	BOOL	m_bTucNguc;
	BOOL	m_bKhoTho;
	CString	m_szTrieuChungKhac2;
	BOOL	m_bDaNiemMacHong;
	BOOL	m_bTimTai;
	BOOL	m_bPhu;
	CString	m_szMach;
	CString	m_szHA;
	CString	m_szTanSoTim;
	CString	m_szRRFNPhai;
	CString	m_szRRFNTrai;
	CString	m_szTiengRalesPhoi;
	CString	m_szViTri;
	CString	m_szTrieuChungKhac;
	CString	m_szBC;
	CString	m_szGran;
	CString	m_szHC;
	CString	m_szHST;
	CString	m_szTC;
	CString	m_szGlucose;
	CString	m_szUreCre;
	CString	m_szOTPT;
	CString	m_szVC;
	CString	m_szFEV1;
	CString	m_szFEV1FVC;
	CString	m_szXQPhoi;
	CString	m_szXNKhac;
	//void			OnLanKhamChange(); 
	//void			OnLanKhamSetfocus(); 
	//void			OnLanKhamKillfocus(); 
	int			OnLanKhamCheckValue(); 
	//void			OnNamChange(); 
	//void			OnNamSetfocus(); 
	//void			OnNamKillfocus(); 
	int			OnNamCheckValue(); 
	//void			OnHoVaTenChange(); 
	//void			OnHoVaTenSetfocus(); 
	//void			OnHoVaTenKillfocus(); 
	int			OnHoVaTenCheckValue(); 
	//void			OnTuoiChange(); 
	//void			OnTuoiSetfocus(); 
	//void			OnTuoiKillfocus(); 
	int			OnTuoiCheckValue(); 
	//void			OnHutThuocLaChange(); 
	//void			OnHutThuocLaSetfocus(); 
	//void			OnHutThuocLaKillfocus(); 
	int			OnHutThuocLaCheckValue(); 
	//void			OnBenhKhacChange(); 
	//void			OnBenhKhacSetfocus(); 
	//void			OnBenhKhacKillfocus(); 
	int			OnBenhKhacCheckValue(); 
	//void			OnSotChange(); 
	//void			OnSotSetfocus(); 
	//void			OnSotKillfocus(); 
	int			OnSotCheckValue(); 
	void			OnHoKhanSelect(); 
	void			OnHoDomSelect(); 
	void			OnTucNgucSelect(); 
	void			OnKhoThoSelect(); 
	//void			OnTrieuChungKhac2Change(); 
	//void			OnTrieuChungKhac2Setfocus(); 
	//void			OnTrieuChungKhac2Killfocus(); 
	int			OnTrieuChungKhac2CheckValue(); 
	void			OnDaNiemMacHongSelect(); 
	void			OnTimTaiSelect(); 
	void			OnPhuSelect(); 
	//void			OnMachChange(); 
	//void			OnMachSetfocus(); 
	//void			OnMachKillfocus(); 
	int			OnMachCheckValue(); 
	//void			OnHAChange(); 
	//void			OnHASetfocus(); 
	//void			OnHAKillfocus(); 
	int			OnHACheckValue(); 
	//void			OnTanSoTimChange(); 
	//void			OnTanSoTimSetfocus(); 
	//void			OnTanSoTimKillfocus(); 
	int			OnTanSoTimCheckValue(); 
	//void			OnRRFNPhaiChange(); 
	//void			OnRRFNPhaiSetfocus(); 
	//void			OnRRFNPhaiKillfocus(); 
	int			OnRRFNPhaiCheckValue(); 
	//void			OnRRFNTraiChange(); 
	//void			OnRRFNTraiSetfocus(); 
	//void			OnRRFNTraiKillfocus(); 
	int			OnRRFNTraiCheckValue(); 
	//void			OnTiengRalesPhoiChange(); 
	//void			OnTiengRalesPhoiSetfocus(); 
	//void			OnTiengRalesPhoiKillfocus(); 
	int			OnTiengRalesPhoiCheckValue(); 
	//void			OnViTriChange(); 
	//void			OnViTriSetfocus(); 
	//void			OnViTriKillfocus(); 
	int			OnViTriCheckValue(); 
	//void			OnTrieuChungKhacChange(); 
	//void			OnTrieuChungKhacSetfocus(); 
	//void			OnTrieuChungKhacKillfocus(); 
	int			OnTrieuChungKhacCheckValue(); 
	//void			OnBCChange(); 
	//void			OnBCSetfocus(); 
	//void			OnBCKillfocus(); 
	int			OnBCCheckValue(); 
	//void			OnGranChange(); 
	//void			OnGranSetfocus(); 
	//void			OnGranKillfocus(); 
	int			OnGranCheckValue(); 
	//void			OnHCChange(); 
	//void			OnHCSetfocus(); 
	//void			OnHCKillfocus(); 
	int			OnHCCheckValue(); 
	//void			OnHSTChange(); 
	//void			OnHSTSetfocus(); 
	//void			OnHSTKillfocus(); 
	int			OnHSTCheckValue(); 
	//void			OnTCChange(); 
	//void			OnTCSetfocus(); 
	//void			OnTCKillfocus(); 
	int			OnTCCheckValue(); 
	//void			OnGlucoseChange(); 
	//void			OnGlucoseSetfocus(); 
	//void			OnGlucoseKillfocus(); 
	int			OnGlucoseCheckValue(); 
	//void			OnUreCreChange(); 
	//void			OnUreCreSetfocus(); 
	//void			OnUreCreKillfocus(); 
	int			OnUreCreCheckValue(); 
	//void			OnOTPTChange(); 
	//void			OnOTPTSetfocus(); 
	//void			OnOTPTKillfocus(); 
	int			OnOTPTCheckValue(); 
	//void			OnVCChange(); 
	//void			OnVCSetfocus(); 
	//void			OnVCKillfocus(); 
	int			OnVCCheckValue(); 
	//void			OnFEV1Change(); 
	//void			OnFEV1Setfocus(); 
	//void			OnFEV1Killfocus(); 
	int			OnFEV1CheckValue(); 
	//void			OnFEV1FVCChange(); 
	//void			OnFEV1FVCSetfocus(); 
	//void			OnFEV1FVCKillfocus(); 
	int			OnFEV1FVCCheckValue(); 
	//void			OnXQPhoiChange(); 
	//void			OnXQPhoiSetfocus(); 
	//void			OnXQPhoiKillfocus(); 
	int			OnXQPhoiCheckValue(); 
	//void			OnXNKhacChange(); 
	//void			OnXNKhacSetfocus(); 
	//void			OnXNKhacKillfocus(); 
	int			OnXNKhacCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void	OnCancelSelect();
	CHMS_OBADTPhoiTacNghenManTinh(CWnd *pParent);
	~CHMS_OBADTPhoiTacNghenManTinh();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBADTPhoiTacNghenManTinh(); 
	int OnEditHMS_OBADTPhoiTacNghenManTinh(); 
	int OnDeleteHMS_OBADTPhoiTacNghenManTinh(); 
	int OnSaveHMS_OBADTPhoiTacNghenManTinh(); 
	int OnCancelHMS_OBADTPhoiTacNghenManTinh(); 
	int OnHMS_OBADTPhoiTacNghenManTinhListLoadData(); 
};
#endif
