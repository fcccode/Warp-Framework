// � 2018 NIREX ALL RIGHTS RESERVED

#ifndef _WS_SOCKET_H_
#define _WS_SOCKET_H_

#include <string>

#include "WEntity.h"
#include "WRegistry.h"
#include "WNetwork.h"
#include "WDefines.h"

class WSSocket : public WEntity
{
public:
	WSSocket(std::string ip, int port, int bufferSize);
	~WSSocket(void);

	W_INT Accept(int& outClientSize);
	W_INT Bind(void);
	W_INT Connect(void);
	W_INT Listen(W_INT backLog = 0);
	W_INT Receive(char* outData, int& lengthTransfer);
	W_INT Send(char* inData, int& lengthTraBnsfer);

	SOCKET Socket(void) const;
	WSADATA SocketData(void)const;

	W_INT Port(void) const;
	std::string IP(void) const;
	std::string Data(void) const;
	bool SockCount(void) const;

private:
	W_INT CleanUp(void);

	WRegistry* m_AcceptReg;
	WRegistry* m_BindReg;
	WRegistry* m_ConnectReg;
	WRegistry* m_ListenReg;
	WRegistry* m_ReceiveReg;
	WRegistry* m_SendReg;

	std::string m_ip;
	W_INT m_port;

	WSADATA m_data;
	SOCKET m_sock;

	W_INT m_bufferSize;
	char* m_recvBuffer;
	char* m_sendBuffer;

	std::string m_cleanedData;

	static int m_sockCount;
	static bool m_bIsStarted;
};

#endif // !_WS_SOCKET_H_