#ifndef PDFSIGNATURESERVER_H
#define PDFSIGNATURESERVER_H
#include <afxwin.h>
#include <string>
#include <vector>
using namespace std;

class AFX_EXT_CLASS CPdfSignatureServer
{
public:
	string m_url;
	string m_username;
	string m_password;
	string m_ip;
	string m_credentialid;
	string m_computername;
	string m_mac;
	string m_os;
	string m_signatureId;
	string m_mid;
	bool   m_localsign;
    string m_local_credentialid;
    string m_signname;
    string m_signtitle;
    CWnd *	m_pMainWnd;
	struct LoginResponse {
		int		code;
		bool	success;
		string message;
		string bearer_token;
		string refresh_token;
		string user_name;
	};
	struct CredentialsListResponse {
		int		code;
		bool success;
		string message;
		string result;
		string credential_id;
		string authorization_email;
		string authorization_phone;
		string valid_from;
		string valid_to;
		string purpose;
		string version;
		string status;
		string status_desc;
	};

	struct SignHashRequest {
        string signatureId;
		string sign_uid;
		string sign_name;
		string image_data;
		string pdf_data;
		string file_name;
        string loid;
        string sign_title;
        string comment;
		float point_x;
		float point_y;
		float width;
		float height;
		int	   page;
        bool isDigiSign;
	};

	struct SignHashResponse {
		int		code;
		bool success;
		string message;
		string result;
		string hash;
	};


	LoginResponse	m_login;
	CredentialsListResponse m_credentials;
	SignHashResponse	m_signHash;
	CPdfSignatureServer(CWnd* pMain);
	~CPdfSignatureServer();
	
	LoginResponse	Login(LPCTSTR lpszUserName, LPCTSTR lpszPassword, LPCTSTR lpszMid);
    LoginResponse LoginLocal(LPCTSTR lpszUserName, LPCTSTR lpszPassword, LPCTSTR lpszMid);
    CredentialsListResponse CredentialsListLocal(LoginResponse loginResult, std::string username, std::string password, std::string mid);

	void			Logout();
	CredentialsListResponse CredentialsList();
	SignHashResponse SignHash(SignHashRequest req);
    SignHashResponse SignHash(std::vector<SignHashRequest> req, std::string transId, std::string imageData, bool isDigiSign);
    int GetSignedCount(std::string pdfData);
};


#endif