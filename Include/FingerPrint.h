#ifndef FINGERPRINT_H
#define FINGERPRINT_H


#include <vector>
#include <map>
#include <string>
#include <afxwin.h>
#include <wincrypt.h>

#pragma once

#define BUFSIZE 512

enum eStatus {
	status_error=-1,
	status_ok=0,
	status_cancel
};

class CPipeMessage{
protected:
	UINT	m_message;
	int		m_status;
	std::string m_data;
	std::string m_title;
	std::string m_description;
	
public:
	CPipeMessage();
	CPipeMessage(UINT message);
	~CPipeMessage();
	
	void SetStatus(eStatus status){m_status = status;}
	int	 GetStatus(){ return m_status;}
	void SetMessage(UINT message){m_message = message;}
	UINT GetMessage(){ return m_message; }
	void SetData(const char* data){m_data = data;}
	std::string GetData() { return m_data;}
	void SetTitle(const char* title){m_title = title;}
	std::string GetTitle(){ return m_title;}
	void SetDescription(const char* desc){ m_description = desc;}
	std::string GetDescription(){ return m_description;}


	std::wstring ToString();
	bool Parse(LPCTSTR lpszData);
};



class CPipeNamed;
class AFX_EXT_CLASS CPipeNamed{
protected:
	HANDLE	m_hPipe;
public:
	CPipeNamed();
	~CPipeNamed();
	
	BOOL Connect();
	BOOL IsConnected();

	void Terimnate();
	bool Send(CPipeMessage* req, CPipeMessage* res);
};

enum eFinger { 
	finger_none = 0, 
	finger_enrollment,
	finger_verification,
	finger_add,
	finger_delete,
	finger_save,
	finger_read,
	finger_bitmap
};


class AFX_EXT_CLASS CFingerPrint
{
	DATA_BLOB	m_RegTemplate;   // BLOB that keeps Enrollment Template. It is used to pass it from Enrollment to Verification and also for saving/reading from file.
	RECT        m_rcDrawArea;       // Rectangle with the desired sizes of the fingerprint image to display
	TCHAR		m_szPath[MAX_PATH];
	CPipeNamed*	m_pPipe;
	CString		m_szFingerID;

public:
	CString		m_szFilePath;
	CString		m_szLOID;
	CString		m_szTitle;
	CString		m_szDescription;

	CPipeMessage m_res;

	CFingerPrint(LPCTSTR lpszFingerID=_T(""));
	~CFingerPrint();
	
	void SetFingerID(LPCTSTR lpszID);

	//Hien form ky van tay
	LRESULT Enrollment(bool upload = true, bool autoDelete=true, LPCTSTR lpszDesc=_T(""));
	
	//Hien form xac nhan
	LRESULT Verification();
	
	//Add van tay 
	LRESULT AddFinger();
	
	//Save van tay len leveldb
	LRESULT SaveTemplate(LPCTSTR lpszID);

	//Doc du lieu van tay tu ID
	LRESULT ReadTemplate(LPCTSTR lpszID);
	
	LRESULT GetBlobData();

	HBITMAP GetDisplayFingerImage(const DATA_BLOB* pImageBlob);	
	void	DeleteFile();
	LRESULT Download(bool finger=false);

};


#endif