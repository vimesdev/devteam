#ifndef SOCKET_H
#define SOCKET_H

#include <stdio.h>
#include "Define.h"

#define SOCKET_ERR							-1
#define SOCKET_OK							0
#define SOCKET_SEND_ERROR					1
#define SOCKET_RECV_HEADER_ERROR			2
#define SOCKET_RECV_BODY_ERROR				3
#define SOCKET_ACCEPT_ERROR					4
#define SOCKET_CONNECT_ERROR				5
#define SOCKET_WRONG_FORMAT_OR_TOO_BIG		6
#define SOCKET_SERVER_STUB_ERROR			7
#define SOCKET_NOT_OPEN						8
#define SOCKET_NO_RIGHTS					9
#define SOCKET_BEGIN_SENDFILE				20
#define SOCKET_END_SENDFILE					21
#define SOCKET_FILE_NOTEXIST				22
#define SOCKET_FILE_STORE_ERR				23
#define SOCKET_FILE_RECV_ERR				24
#define SOCKET_USER_ERROR_BASE				1000

#define SOCKET_MAX_SIZE						0x00100000 //1024*1024=1MB
#define SOCKET_HEADER_SIZE					4
#define SOCKET_STREAM_BUFFER_STEP			32


#define SOCKET_PORT	2011


int socket_init();
int socket_uninit();
SOCKET_HANDLE	socket_accept(SOCKET_HANDLE sockfd,struct sockaddr * sock_addr, int * sock_addr_length);
SOCKET_HANDLE	socket_server(unsigned short port);
SOCKET_HANDLE	socket_client(int port, char* host, struct addrinfo **aiList);
SOCKET_HANDLE	socket_client(int port, wchar_t* host, struct addrinfo **aiList);
void	socket_free_addrinfo(struct addrinfo *aiList);
void	socket_close(SOCKET_HANDLE sock);


// Converts char * to wchar_t *.
// Allocates using new[]. Deallocate with delete [].
wchar_t * char2wchar(char * instr);
// Converts wchar_t * to char *.
// Allocates using new[]. Deallocate with delete [].
char * wchar2char(wchar_t * instr);



#endif
