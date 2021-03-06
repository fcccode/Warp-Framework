// � 2018 NIREX ALL RIGHTS RESERVED

#ifndef _WS_WARP_SOCK_H_
#define _WS_WARP_SOCK_H_

#include <winsock2.h>
#include <WS2tcpip.h>
#pragma comment (lib, "ws2_32.lib")

typedef SOCKET WSsocket;

#define WARP_FRAMEWORK
#define W_SERVER
#define WARP

#define IPV4 AF_INET
#define IPV6 AF_INET6

#endif // !_WS_WARP_SOCK_H_