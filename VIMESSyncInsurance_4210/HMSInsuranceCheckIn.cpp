#include "stdafx.h"
#include "HMSInsuranceCheckIn.h"
#include "MainFrm.h"
using namespace std;
CHMSInsuranceCheckIn::CHMSInsuranceCheckIn(){
	
}
CHMSInsuranceCheckIn::~CHMSInsuranceCheckIn(){

}
void CHMSInsuranceCheckIn::Laythongtinketnoi(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT *,md5(hhgd_password) as password FROM hms_hospital_gdbhyt WHERe hhgd_active = 'Y' "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hhgd_url"), m_szUrl);
		rs.GetValue(_T("hhgd_userid"), m_szUserName);
		rs.GetValue(_T("password"), m_szPassword);
		rs.GetValue(_T("hhgd_provid"), m_nProvinceID);
		rs.GetValue(_T("hhgd_hospitalid"), m_szHospitalID);
	}
}

bool CHMSInsuranceCheckIn::GetToken(JSONVALUE* jsonResponse){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szJsonData, szError;
	CString szParams, szSQL;
	CRecord rs(&pMF->m_db);
	

	szParams.Format(_T("http://egw.baohiemxahoi.gov.vn/api/token/take"));

	JSONVALUE jsonRequest;	
	jsonRequest["username"] = m_szUserName;
	jsonRequest["password"] = m_szPassword;

	std::wstring json_string;
	jsonRequest.ToString(json_string);
	szJsonData.Format(_T("%s"), json_string.c_str());
	
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);

	return res;
}
bool CHMSInsuranceCheckIn::KiemTraThongTinKhamChuaBenh(LPCTSTR lpszMathe, int nSongay, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams;

	szParams.Format(_T("User.svc/REST/api/KiemTraThongTinKhamChuaBenh?username=%s&password=%s&maThe=%s&soNgay=%d&maTinh=%d"), 
		m_szUserName, m_szPassword, lpszMathe, nSongay, m_nProvinceID);
	bool res = CHttpClient::Get(szParams, jsonResponse);
	
	/*JSONVALUE j;
	JSONVALUE j2, j3, j4;
	j = jsonResponse->At("DuLieu");
	std::wstring strData;
	jsonResponse->ToString(strData);

	CString tmpStr;
	tmpStr.Format(_T("%s"), strData.c_str());*/
//	tmpStr.Trim();
//_msg(_T("%s"), tmpStr);
//	j2.Parse((LPCTSTR) tmpStr.Mid(1, tmpStr.GetLength()-1));
//	j3 = j2.At((size_t)0);
//	j3.ToString(strData);
	//_msg(_T("%s"), strData.c_str());
	return res;

}
bool CHMSInsuranceCheckIn::NhanLichSuKCB(CString szJsonData, JSONVALUE* jsonResponse){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL,szResponse, szError;
	CString szParams, szData, tmpStr, tmpStr1;
	
	JSONVALUE jsonResponseToken;

	bool token = GetToken(&jsonResponseToken);
	if(token)
	{
		JSONVALUE j = jsonResponseToken.At(_T("maKetQua"));
		JSONVALUE jj = jsonResponseToken.At(_T("APIKey"));
		JSONVALUE jValue;
		std::wstring strData;
		std::wstring json_string;		
		// Ma loi tra ve
		j.ToString(json_string);		
		szData.Format(_T("%s"), json_string.c_str());
		// APIKey tra ve
		jj.ToString(json_string);		
		szData.Format(_T("%s"), json_string.c_str());

		jValue = jj["access_token"];
		jValue.ToString(strData);
		tmpStr = strData.c_str();
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
		m_szAccess_token = tmpStr;
		//_tprintf(_T("\r\nm_szAccess_token:%s"), m_szAccess_token);

		jValue = jj["id_token"];
		jValue.ToString(strData);
		tmpStr = strData.c_str();
		tmpStr1.Format(_T("%c"), 34);
		tmpStr.Replace(tmpStr1, _T(""));
        m_szToken_ID = tmpStr;
	//	_tprintf(_T("\r\nm_szToken_ID:%s"), m_szToken_ID);

	}

	szParams.Format(_T("http://egw.baohiemxahoi.gov.vn/api/egw/nhanLichSuKCB?token=%s&id_token=%s&username=%s&password=%s"), m_szAccess_token, m_szToken_ID,
		m_szUserName, m_szPassword);

	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);

	
	return res;

}
bool CHMSInsuranceCheckIn::KiemTraTrangThaiHoSo(LPCTSTR lpszMaLienKet, LPCTSTR lpszNgayravien, LPCTSTR lpszKey, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams;
	szParams.Format(_T("User.svc/REST/api/KiemTraTrangThaiHoSo?username=%s&password=%s&maLienKet=%s&ngayRaVien=%s&maBenhVien=%s&key=%s"), 
		m_szUserName, m_szPassword, lpszMaLienKet, lpszNgayravien, m_szHospitalID, lpszKey);
	
	bool res = CHttpClient::Get(szParams, jsonResponse);
	return res;
}
bool CHMSInsuranceCheckIn::LamMoiThongTin(LPCTSTR lpszKey, LPCTSTR lpszType, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams, szJsonData;
	szParams.Format(_T("User.svc/REST/api/LamMoiThongTin?username=%s&password=%s&key=%s&type=%s"), 
		m_szUserName, m_szPassword, lpszKey, lpszType);
	szJsonData.Empty();
	if(jsonRequest)
	{
		std::wstring json_string;
		jsonRequest->ToString(json_string);
		szJsonData.Format(_T("%s"), json_string.c_str());
	}
	else
	{
		szJsonData.Format(_T("{}"));
	}
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;
}
bool CHMSInsuranceCheckIn::ThemHoSoBenhAn(LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams, szJsonData;
	szParams.Format(_T("User.svc/REST/api/ThemHoSoBenhAn?username=%s&password=%s&TimeSendRequest=%s"), 
		m_szUserName, m_szPassword, lpszTimeSendRequest);
	szJsonData.Empty();
	if(jsonRequest)
	{
		std::wstring json_string;
		jsonRequest->ToString(json_string);
		szJsonData.Format(_T("%s"), json_string.c_str());
	}
	else
	{
		szJsonData.Format(_T("{}"));
	}
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;
}
bool CHMSInsuranceCheckIn::ThemHoSoBenhAnDangString(LPCTSTR lpszKey, LPCTSTR lpszTimeSendRequest, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams, szJsonData;
	szParams.Format(_T("User.svc/REST/api/ThemHoSoBenhAnDangString?username=%s&password=%s&key=%s&TimeSendRequest=%s"), 
		m_szUserName, m_szPassword, lpszKey, lpszTimeSendRequest);
	szJsonData.Empty();
	if(jsonRequest)
	{
		std::wstring json_string;
		jsonRequest->ToString(json_string);
		szJsonData.Format(_T("%s"), json_string.c_str());
	}
	else
	{
		szJsonData.Format(_T("{}"));
	}
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	
	return res;
}
bool CHMSInsuranceCheckIn::ThemThongTinVaoKham(LPCTSTR lpszTimeSendRequest, bool bXoathongtin, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams, szJsonData, tmpStr;
	if(bXoathongtin) tmpStr = _T("true");
	else tmpStr = _T("false");
	szParams.Format(_T("User.svc/REST/api/ThemThongTinVaoKham?username=%s&password=%s&TimeSendRequest=%s&XoaThongTin=%s"), 
		m_szUserName, m_szPassword, lpszTimeSendRequest, tmpStr);
	szJsonData.Empty();
	if(jsonRequest)
	{
		std::wstring json_string;
		jsonRequest->ToString(json_string);
		szJsonData.Format(_T("[%s]"), json_string.c_str());

	}
	else
	{
		szJsonData.Format(_T("[{}]"));
	}

	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;
}
bool CHMSInsuranceCheckIn::ThongTinTrangThaiTienTrinh(LPCTSTR lpszIP, LPCTSTR lpszTimeSendRequest, LPCTSTR lpszComment, LPCTSTR lpszKey, JSONVALUE* jsonRequest, JSONVALUE* jsonResponse){
	CString szResponse, szError;
	CString szParams, szJsonData;
	szParams.Format(_T("User.svc/REST/api/ThongTinTrangThaiTienTrinh?username=%s&password=%s&IP=%s&TimeSendRequest=%s&Comment=%s&key=%s"), 
		m_szUserName, m_szPassword, lpszIP, lpszTimeSendRequest, lpszComment, lpszKey);
	szJsonData.Empty();
	if(jsonRequest)
	{
		std::wstring json_string;
		jsonRequest->ToString(json_string);
		szJsonData.Format(_T("%s"), json_string.c_str());
	}
	else
	{
		szJsonData.Format(_T("{}"));
	}
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;
}
bool CHMSInsuranceCheckIn::NhanThongTinHanhChinhCuaThe(CString szJsonData, JSONVALUE* jsonResponse){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL,szResponse, szError;
	CString szParams, szData, tmpStr, tmpStr1;
	
	szParams.Format(_T("https://gdbhyt.baohiemxahoi.gov.vn/ThongTuyenLSKCB/CheckMaThe"));	
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;	
}
bool CHMSInsuranceCheckIn::GuiGiamDinh(CString szJsonData, JSONVALUE* jsonResponse){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL,szResponse, szError;
	CString szParams, szData, tmpStr, tmpStr1;
	
	//szParams.Format(_T("%s/giamdinh"),pMF->m_szIPWebSevice);
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	return res;	
}
bool CHMSInsuranceCheckIn::SingerXML_VNPT(CString szJsonData, JSONVALUE* jsonResponse)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL,szResponse, szError;
	CString szParams, szData, tmpStr, tmpStr1;
	
	//szParams.Format(_T("http://localhost:3000/api/ins/SingerXML"));	
	szParams.Format(_T("http://localhost:3000/api/ins/SingerXML"));	
	bool res = CHttpClient::Post(szParams, szJsonData, jsonResponse);
	//_msg(_T("vao :%s"),tmpStr);
	return res;	

}



