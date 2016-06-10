#include "server.h"

int main(int *argc, char **argv) {
  char request[256];
  char response[] = "HTTP/1.1 200 OK\r\nContent-Length: 12\r\n\r\nHello World!";

  int conn_fd, socket_fd;

  socket_fd = create_server(4000);

  while(1) {
    conn_fd = accept(socket_fd, (struct sockaddr*) NULL, NULL);

    bzero(request, 256);

    read(conn_fd, request, 256);

    //printf("INFO - request:\n%s", request);

    write(conn_fd, response, strlen(response) + 1);

    close(conn_fd);
  }

  close(socket_fd);

  return EXIT_SUCCESS;
}

int create_server(int port) {
  int sock_fd;

  sock_fd = socket(AF_INET, SOCK_STREAM, 0);

  struct sockaddr_in address;

  bzero(&address, sizeof(address));

  address.sin_family = AF_INET;
  address.sin_addr.s_addr = htons(INADDR_ANY);
  address.sin_port = htons(port);

  bind(sock_fd, (struct sockaddr *) &address, sizeof(address));

  listen(sock_fd, 10);

  return sock_fd;
}
