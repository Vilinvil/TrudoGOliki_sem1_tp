#include "server.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
    auto file_stream = std::fstream();
    Server s{SocketAddress{argv[1], 8080}, file_stream,
             "techno_park/2023_1_TrudoGOliki/build"};
    s.Run();
}
