#ifndef HMSLIENTHONGNHATHUOC_H
#define HMSLIENTHONGNHATHUOC_H

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

class CHttpFile;


class AFX_EXT_CLASS CHMSLienThongNhaThuoc: public CHttpClient{
protected:
	CString		m_szUserName;
	CString		m_szPassword;
	CString		m_szHospitalID;
	CString		m_szURL;
	int			m_nProvinceID;
	CString		m_szAccess_token;
	CString		m_szToken_ID;
	CString		m_szMahoso;
	CString		m_szHospitalName;
	CString		m_szScID;
	CString		m_szScName;
	

public:
	CHMSLienThongNhaThuoc();
	~CHMSLienThongNhaThuoc();
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
	
	void	OnInitializeComponents();
	void	Laythongtinketnoi(long nStockID);
	bool	GetToken(JSONVALUE* jsonResponse);
	bool	NhanLichSuKCB(CString szJsonData, JSONVALUE* jsonResponse);
	bool	NhanLichSuChiTietKCB(CString szMahoso ,JSONVALUE* jsonResponse);
	bool	KiemTraThongTinKhamChuaBenh(LPCTSTR lpszMathe, int nSongay, JSONVALUE* jsonResponse);
	bool	KiemTraTrangThaiHoSo(LPCTSTR lpszMaLienKet, LPCTSTR lpszNgayravien, LPCTSTR lpszKey, JSONVALUE* jsonResponse);
	bool	LamMoiThongTin(LPCTSTR lpszKey, LPCTSTR lpszType, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemHoSoBenhAn(LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemHoSoBenhAnDangString(LPCTSTR lpszKey, LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThemThongTinVaoKham(LPCTSTR lpszTimeSendRequest, bool bXoathongtin, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	ThongTinTrangThaiTienTrinh(LPCTSTR lpszIP, LPCTSTR lpszTimeSendRequest, LPCTSTR lpszComment, LPCTSTR lpszKey, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse);
	bool	NhanThongTinHanhChinhCuaThe(CString szJsonData, JSONVALUE* jsonResponse, int nGetWay);
	bool	NhanLichSuKCB2018(CString szJsonData, JSONVALUE* jsonResponse);
	CString GetToken_CloudInvoice();
	bool	OnPostDonThuoc(long nDocumentNo, long nOrderID, CString szType);
	bool	OnPostHoaDonThuoc(long nDocumentNo, long nOrderID, CString szType);
	bool	OnPostPhieuNhapKho(long m_nPoID,int nStorage_id, int nType);
	bool	OnPostPhieuXuatKho(long m_nTransactionID, int nType);
	bool	OnPostPhieuNhapKhoWithKey(long m_nID);
	bool	OnDeletePhieuNhapKho(long nID);
	bool	OnPostDonThuocWithKey(long nOrderID);
	bool	OnPostHoaDonThuocWithKey(long nOrderID, long nDoc_no);
	bool	OnDeleteDonThuoc(long nOrderID);
	bool	OnDeleteHoaDonThuoc(long nOrderID, long nDoc_no);
	CString OnTaoMoiDanhMucThuoCQG(int nStockID,CString szTenThuoc, CString szSoDK, CString szTenHoatChat, CString szHamLuong, CString szDongGoi, CString szHangSX,CString szNuocSx,CString szDonVi );
	bool	OnPostAuto(long nStorage_id);
	bool	OnPostAuto_PurchaseOrder(CHttpFile** pFile, long nID=0);
	bool	OnPostAuto_SaleOrder(CHttpFile** pFile, long nOrderID = 0, long nDoc_no = 0);
};
#endif
