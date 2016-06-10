#ifndef SERVER
#define SERVER

#include<sys/types.h>
#include<sys/socket.h>

#include<netdb.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int create_server(int port);

#endif
