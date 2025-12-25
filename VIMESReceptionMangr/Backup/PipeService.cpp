#include "PipeService.h"

#include <string>
#include <iostream>
#include <sstream>
#include <atlenc.h>

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

using namespace rapidjson;
using namespace std;

constexpr auto BUFSIZE = 8192;
static CWnd* kMain = NULL;
DWORD WINAPI InstanceThread(LPVOID);
VOID GetAnswerToRequest(LPTSTR, LPTSTR, LPDWORD);



// Convert a wide Unicode string to an UTF8 string
static std::string utf8_encode(const std::wstring& wstr)
{
	if (wstr.empty()) return std::string();
	int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
	std::string strTo(size_needed, 0);
	WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
	return strTo;
}

// Convert an UTF8 string to a wide Unicode String
static std::wstring utf8_decode(const std::string& str)
{
	if (str.empty()) return std::wstring();
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}





PipeService::PipeService(){
    _tcscpy(m_szPipeName, L"card_named");
}

PipeService::~PipeService() {
}

int PipeService::StartServer(CWnd* pMain)
{
	kMain = pMain;
    BOOL   fConnected = FALSE;
    DWORD  dwThreadId = 0;
    HANDLE hPipe = INVALID_HANDLE_VALUE, hThread = NULL;
    std::wstring strPipename = TEXT("\\\\.\\pipe\\");
    strPipename += m_szPipeName;
    _tprintf(L"\r\nPipe: %s", strPipename.c_str());
    // The main loop creates an instance of the named pipe and 
    // then waits for a client to connect to it. When the client 
    // connects, a thread is created to handle communications 
    // with that client, and this loop is free to wait for the
    // next client connect request. It is an infinite loop.

    

    for (;;)
    {
        _tprintf(TEXT("\nPipe Server: Main thread awaiting client connection on %s\n"), strPipename.c_str());
        hPipe = CreateNamedPipe(
            strPipename.c_str(),             // pipe name 
            PIPE_ACCESS_DUPLEX,       // read/write access 
            PIPE_TYPE_MESSAGE |       // message type pipe 
            PIPE_READMODE_MESSAGE |   // message-read mode 
            PIPE_WAIT,                // blocking mode 
            PIPE_UNLIMITED_INSTANCES, // max. instances  
            BUFSIZE,                  // output buffer size 
            BUFSIZE,                  // input buffer size 
            0,                        // client time-out 
            NULL);                    // default security attribute 

        if (hPipe == INVALID_HANDLE_VALUE)
        {
            _tprintf(TEXT("CreateNamedPipe failed, GLE=%d.\n"), GetLastError());
            return -1;
        }

        // Wait for the client to connect; if it succeeds, 
        // the function returns a nonzero value. If the function
        // returns zero, GetLastError returns ERROR_PIPE_CONNECTED. 

        fConnected = ConnectNamedPipe(hPipe, NULL) ?
            TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);

        if (fConnected)
        {
            printf("Client connected, creating a processing thread.\n");
            
            // Create a thread for this client. 
            hThread = CreateThread(
                NULL,              // no security attribute 
                0,                 // default stack size 
                InstanceThread,    // thread proc
                (LPVOID)hPipe,    // thread parameter 
                0,                 // not suspended 
                &dwThreadId);      // returns thread ID 

            if (hThread == NULL)
            {
                _tprintf(TEXT("CreateThread failed, GLE=%d.\n"), GetLastError());
                return -1;
            }
            else CloseHandle(hThread);
            
        }
        else
            // The client could not connect, so close the pipe. 
            CloseHandle(hPipe);
    }

    return 0;
}

static TCHAR kRequest[BUFSIZE * sizeof(TCHAR)];

DWORD WINAPI InstanceThread(LPVOID lpvParam)
// This routine is a thread processing function to read from and reply to a client
// via the open pipe connection passed from the main loop. Note this allows
// the main loop to continue executing, potentially creating more threads of
// of this procedure to run concurrently, depending on the number of incoming
// client connections.
{ 
   HANDLE hHeap      = GetProcessHeap();
   TCHAR* pchRequest = (TCHAR*)HeapAlloc(hHeap, 0, BUFSIZE*sizeof(TCHAR));
   TCHAR* pchReply   = (TCHAR*)HeapAlloc(hHeap, 0, BUFSIZE*sizeof(TCHAR));

   DWORD cbBytesRead = 0, cbReplyBytes = 0, cbWritten = 0; 
   BOOL fSuccess = FALSE;
   HANDLE hPipe  = NULL;

   // Do some extra error checking since the app will keep running even if this
   // thread fails.

   if (lpvParam == NULL)
   {
       printf( "\nERROR - Pipe Server Failure:\n");
       printf( "   InstanceThread got an unexpected NULL value in lpvParam.\n");
       printf( "   InstanceThread exitting.\n");
       if (pchReply != NULL) HeapFree(hHeap, 0, pchReply);
       if (pchRequest != NULL) HeapFree(hHeap, 0, pchRequest);
       return (DWORD)-1;
   }

   if (pchRequest == NULL)
   {
       printf( "\nERROR - Pipe Server Failure:\n");
       printf( "   InstanceThread got an unexpected NULL heap allocation.\n");
       printf( "   InstanceThread exitting.\n");
       if (pchReply != NULL) HeapFree(hHeap, 0, pchReply);
       return (DWORD)-1;
   }

   if (pchReply == NULL)
   {
       printf( "\nERROR - Pipe Server Failure:\n");
       printf( "   InstanceThread got an unexpected NULL heap allocation.\n");
       printf( "   InstanceThread exitting.\n");
       if (pchRequest != NULL) HeapFree(hHeap, 0, pchRequest);
       return (DWORD)-1;
   }

   // Print verbose messages. In production code, this should be for debugging only.
   printf("InstanceThread created, receiving and processing messages.\n");

// The thread's parameter is a handle to a pipe object instance. 
 
   hPipe = (HANDLE) lpvParam; 

// Loop until done reading
   while (1) 
   { 
   // Read client requests from the pipe. This simplistic code only allows messages
   // up to BUFSIZE characters in length.
	  
	  memset(pchRequest, L'\0', BUFSIZE*sizeof(TCHAR));

      fSuccess = ReadFile( 
         hPipe,        // handle to pipe 
         pchRequest,    // buffer to receive data 
         BUFSIZE*sizeof(TCHAR), // size of buffer 
         &cbBytesRead, // number of bytes read 
         NULL);        // not overlapped I/O 

      if (!fSuccess || cbBytesRead == 0)
      {   
          if (GetLastError() == ERROR_BROKEN_PIPE)
          {
              _tprintf(TEXT("InstanceThread: client disconnected.\n")); 
          }
          else
          {
              _tprintf(TEXT("InstanceThread ReadFile failed, GLE=%d.\n"), GetLastError()); 
          }
          break;
      }

   // Process the incoming message.
      GetAnswerToRequest(pchRequest, pchReply, &cbReplyBytes); 
   // Write the reply to the pipe. 
      fSuccess = WriteFile( 
         hPipe,        // handle to pipe 
         pchReply,     // buffer to write from 
         cbReplyBytes, // number of bytes to write 
         &cbWritten,   // number of bytes written 
         NULL);        // not overlapped I/O 

      if (!fSuccess || cbReplyBytes != cbWritten)
      {   
          _tprintf(TEXT("InstanceThread WriteFile failed, GLE=%d.\n"), GetLastError()); 
          break;
      }
  }

// Flush the pipe to allow the client to read the pipe's contents 
// before disconnecting. Then disconnect the pipe, and close the 
// handle to this pipe instance. 
 
   FlushFileBuffers(hPipe); 
   DisconnectNamedPipe(hPipe); 
   CloseHandle(hPipe); 

   HeapFree(hHeap, 0, pchRequest);
   HeapFree(hHeap, 0, pchReply);

   cout << "\r\nInstanceThread exiting.\n" << endl;
   return 1;
}

VOID GetAnswerToRequest( LPTSTR pchRequest, 
                         LPTSTR pchReply, 
                         LPDWORD pchBytes )
// This routine is a simple function to print the client request to the console
// and populate the reply buffer with a default data string. This is where you
// would put the actual client request processing code that runs in the context
// of an instance thread. Keep in mind the main thread will continue to wait for
// and receive other client connections while the instance thread is working.
{
    
	if(kMain && pchRequest)
	{
		kMain->SendMessage(WM_COMMAND, PM_CARD, (LPARAM)pchRequest);
	}
    // Check the outgoing message to make sure it's not too long for the buffer.
    if (pchReply && FAILED(StringCchCopy( pchReply, BUFSIZE, TEXT("reply") )))
    {
        *pchBytes = 0;
        pchReply[0] = 0;
        cout << "StringCchCopy failed, no outgoing message.\n" << endl;
        return;
    }
    *pchBytes = (lstrlen(pchReply)+1)*sizeof(TCHAR);
}





PipeMessage::PipeMessage() :m_message(0), m_status(status_ok) {

}
PipeMessage::PipeMessage(UINT message) :m_message(message), m_status(status_ok) {

}



PipeMessage::~PipeMessage() {

}



std::wstring PipeMessage::ToString() {

    Document d(kObjectType);
    
    Value message(kNumberType);
    message.SetInt(m_message);
    d.AddMember("message", message, d.GetAllocator());

    Value status(kNumberType);
    status.SetInt(m_status);
    d.AddMember("status", status, d.GetAllocator());

    Value data(kStringType);
    data.SetString(m_data.c_str(), m_data.length());
    d.AddMember("data", data, d.GetAllocator());
    
    // 3. Stringify the DOM
    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    // Output {"project":"rapidjson","stars":11}
    std::cout << buffer.GetString() << std::endl;
    return utf8_decode(buffer.GetString());
}

bool PipeMessage::Parse(LPCTSTR lpszData) {
    if (lpszData == NULL)
        return false;
    Document d;
    std::string msg = utf8_encode(lpszData);
    d.Parse(msg.c_str());
    if (d.HasMember("message"))
    {
        Value& value = d["message"];
        m_message = value.GetInt();
    }
    if (d.HasMember("status"))
    {
        Value& value = d["status"];
        m_status = value.GetInt();
    }
    if (d.HasMember("data"))
    {
        Value& value = d["data"];
        m_data = value.GetString();
    }
   
    return true;
}