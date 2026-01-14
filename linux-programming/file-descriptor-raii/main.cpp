#include "./problem/file_locking_problem.hpp"
#include<chrono>
#include<thread>

int main() {
    // {
    //     FileDescriptor a ("a.txt", O_RDWR);
    //     char buffer[4096];
    //     a.read_(buffer, sizeof(buffer));
    //     std::cout<<buffer<<std::endl;

    //     std::this_thread::sleep_for(std::chrono::seconds(10));
    //     a.write_("ABABAB", 6);
    // }

    {
        FileLockingProblem p(0);
        int n = p.counter("a.txt");
        std::cout << "count: " <<  p.getCounter()  <<std::endl;
    }

    {
        FileLockingProblem p(0);
        int n = p.safe_counter("a.txt");
        std::cout << "safe count: " <<  p.getCounter()  <<std::endl;
    }
    std::cout<<"closing process"<<std::endl;
    return 0;
}