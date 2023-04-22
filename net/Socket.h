//
// Created by Oyeinkare Alamieyeseigha on 4/22/23.
//

#ifndef ZEPHYR_SOCKET_H
#define ZEPHYR_SOCKET_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace net_socket {
    class Socket {
    private:
        int sock;
        struct sockaddr_in address;
        int connection;
    public:
        Socket(int domain, int service, int protocol, int port, u_long interface);
        virtual int establish_network_connection(int sock, struct sockaddr_in address) = 0;
        void test_connection(int);
        struct sockaddr_in get_address();
        int get_connection();
        int get_sock();
    };

}

#endif //ZEPHYR_SOCKET_H



