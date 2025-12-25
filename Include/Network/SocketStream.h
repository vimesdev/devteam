#ifndef SOCKETSTREAM_H
#define SOCKETSTREAM_H

#include "Define.h"


typedef enum ESOCKET{
	SM_none = 0,
	SM_login,
	SM_logout,
	SM_auth,
	SM_file_create,
	SM_file_remove,
	SM_file_open,
	SM_file_close,
	SM_file_upload,
	SM_file_download,
	SM_file_seek,
	SM_file_tell,
	SM_file_read,
	SM_file_write,
	SM_dirlist,
	SM_mkdir,
	SM_rmdir,
	SM_system_cmd,
	SM_version,
	SM_textchat,
	SM_realtime,
	SM_sql_command,
	SM_sql_exec,
	SM_plugin_exec,
	SM_plugin_list
} SOCKET_METHOD;


class SocketStream
{
protected:
	char*	m_szBuffer;
	void	InitBuffer();
	int		m_nSize;
	char*	m_pPos;

	// Member functions for the private use of recv_buffer
	int		m_nRecvBuffer;
	int		m_nRecvBufferCount;


public:
	SocketStream();
	virtual ~SocketStream();

	void			Reset();
	int				GetBufferSize();
	void			CopyStream(SocketStream* stream);
	void			CheckResize(int iCheckLen);

	void			SetPosition(int iPosition);
	int				GetPosition();

	void			put_byte(unsigned char b);
	void			put_int(int i);
	void			put_long(long l);
	void			put_float(float f);
	void			put_double(double d);
	void			put_string(char* str);

	unsigned char	get_byte();
	int				get_int();
	long			get_long();
	float			get_float();
	double			get_double();
	char*			get_string();
	int				send_buffer(SOCKET_HANDLE socket);
	int				recv_buffer(SOCKET_HANDLE socket, int iMaxLen);
};


class SocketStack : public SocketStream
{
	
protected:
	int m_nSize;
	SocketStream* m_pStreamHeader;
public:
	SocketStack();
	~SocketStack();

	static const char* GetErrorMessageStr(int iErr);

	void InsertHeader();
	void ReadHeader();

	int Invoke(SOCKET_HANDLE sock);

	int SendMessageBuffer(SOCKET_HANDLE sock);
	int SendMessage(SOCKET_HANDLE sock);
	int RecvMessage(SOCKET_HANDLE sock);
	
};

#endif

