#include "./fd/fd.hpp"

int main() {
    {
        FileDescriptor a ("a.txt", O_RDONLY);
        char buffer[4096];
        a.read_(buffer, sizeof(buffer));
        std::cout<<buffer<<std::endl;
    }
    std::cout<<"closing process"<<std::endl;
    return 0;
}