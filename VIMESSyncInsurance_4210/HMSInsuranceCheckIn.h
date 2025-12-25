#ifndef HMSINSURANCECHECKIN_H
#define HMSINSURANCECHECKIN_H

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
#include "HttpClient.h"

class CHMSInsuranceCheckIn : public CHttpClient{
protected:
	CString		m_szUserName;
	CString		m_szPassword;
	CString		m_szHospitalID;
	CString		m_szURL;
	int			m_nProvinceID;
	CString		m_szAccess_token;
	CString		m_szToken_ID;

public:
	CHMSInsuranceCheckIn();
	~CHMSInsuranceCheckIn();
	void	SetUserName(LPCTSTR lpszUserName){
		m_szUserName = lpszUserName;
	}
	void	SetPassword(LPCTSTR lpszPassword){
		m_szPassword = lpszPassword;
	}
	void	SetProvinceID(int nProvID){
		m_nProvinceID = nProvID;
	}
	void	SetHospitalID(LPCTSTR lpszHospitalID)
	{
		m_szHospitalID = lpszHospitalID;
	}
	int	GetProviceID(){
		return m_nProvinceID;
	}

	void	Laythongtinketnoi();
	bool	GetToken(JSONVALUE* jsonResponse);
	bool	NhanLichSuKCB(CString szJsonData, JSONVALUE* jsonResponse);
	bool	KiemTraThongTinKhamChuaBenh(LPCTSTR lpszMathe, int nSongay, JSONVALUE* jsonResponse);
	bool	KiemTraTrangThaiHoSo(LPCTSTR lpszMaLienKet, LPCTSTR lpszNgayravien, LPCTSTR lpszKey, JSONVALUE* jsonResponse);
	bool	LamMoiThongTin(LPCTSTR lpszKey, LPCTSTR lpszType, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemHoSoBenhAn(LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemHoSoBenhAnDangString(LPCTSTR lpszKey, LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemThongTinVaoKham(LPCTSTR lpszTimeSendRequest, bool bXoathongtin, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThongTinTrangThaiTienTrinh(LPCTSTR lpszIP, LPCTSTR lpszTimeSendRequest, LPCTSTR lpszComment, LPCTSTR lpszKey, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	NhanThongTinHanhChinhCuaThe(CString szJsonData, JSONVALUE* jsonResponse);
	bool	GuiGiamDinh(CString szJsonData, JSONVALUE* jsonResponse);
	bool	SingerXML_VNPT(CString szJsonData, JSONVALUE* jsonResponse);
	
};
#endif
