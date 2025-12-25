#ifndef PipeSERVICE_H
#define PipeSERVICE_H

#include <afxwin.h>
#include <stdio.h> 
#include <tchar.h>
#include <strsafe.h>
#include <vector>
#include <string>

enum eStatus {
	status_error = -1,
	status_ok = 0,
	status_cancel = 2
};


enum eFinger {
	finger_none = 0,
	finger_enrollment,
	finger_verification,
	finger_add,
	finger_delete,
	finger_save,
	finger_read,
	finger_bitmap,
	pipe_write
};

#define PM_CARD  0x100000

class PipeMessage {
protected:
	UINT	m_message;
	int		m_status;
	
public:
	std::string m_data;

	PipeMessage();
	PipeMessage(UINT message);
	~PipeMessage();

	void SetStatus(eStatus status) { m_status = status; }
	int		GetStatus() { return m_status; }
	void SetMessage(UINT message) { m_message = message; }
	UINT GetMessage() { return m_message; }
	void SetData(const char* data) {
		m_data = data;
	}
	std::string GetData() { return m_data; }

	std::wstring ToString();
	bool Parse(LPCTSTR lpszData);
};



#pragma once
class PipeService
{
	TCHAR m_szPipeName[64];
	
public:
	PipeService();
	~PipeService();

	int StartServer(CWnd* pMain);
	//VOID GetAnswerToRequest(LPTSTR, LPTSTR, LPDWORD);
	


};




#endif