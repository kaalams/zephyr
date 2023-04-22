//
// Created by Oyeinkare Alamieyeseigha on 4/22/23.
//

#include "Socket.h"

net_socket::Socket::Socket(int domain, int service, int protocol, int port, u_long interface) {
    //define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    //instantiate socket
    sock = socket(domain, service, protocol);
    //test socket
    test_connection(sock);
    connection = establish_network_connection(sock, address);
}

void net_socket::Socket::test_connection(int test_item) {
    if (test_item < 0) {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in net_socket::Socket::get_address() {
    return address;
}

int net_socket::Socket::get_sock() {
    return sock;
}

int net_socket::Socket::get_connection() {
    return connection;
}
