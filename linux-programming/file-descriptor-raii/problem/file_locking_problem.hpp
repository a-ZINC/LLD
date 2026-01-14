#ifndef FILE_LOCKING_PROBLEM_HPP
#define FILE_LOCKING_PROBLEM_HPP

#include <string>
#include <thread>
#include <chrono>
#include <sys/file.h>
#include "../fd/fd.hpp"

class FileLockingProblem {
    private:
        int cnt = 0;
    public:
        FileLockingProblem(int count);
        ~FileLockingProblem();

        int counter(std::string path);
        int safe_counter(std::string path);
        int getCounter();
};

#endif