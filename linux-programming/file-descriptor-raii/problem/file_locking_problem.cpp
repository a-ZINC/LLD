#include "./file_locking_problem.hpp"

FileLockingProblem::FileLockingProblem(int count): cnt(count) {}
FileLockingProblem::~FileLockingProblem(){};

int FileLockingProblem::counter(std::string path) {
    FileDescriptor src(path, O_RDWR);

    char buffer[32];
    ssize_t n = src.read_(buffer, sizeof(buffer));
    this->cnt = atoi(buffer);

    this->cnt += 1;
    lseek(src.get(), 0, SEEK_SET);
    n = snprintf(buffer, sizeof(buffer), "%d", this->cnt);
    std::cout << "debug: " << n <<std::endl;
    n = src.write_(buffer, n);
    return n;
};

int FileLockingProblem::safe_counter(std::string path) {
    FileDescriptor src(path, O_RDWR);

    if (flock(src.get(), LOCK_EX) == -1) {
        throw std::runtime_error("Failed to acquire file lock");
    }
    char buffer[32];
    ssize_t n = src.read_(buffer, sizeof(buffer));
    this->cnt = atoi(buffer);

    std::this_thread::sleep_for(std::chrono::seconds(10));
    this->cnt += 1;
    lseek(src.get(), 0, SEEK_SET);
    n = snprintf(buffer, sizeof(buffer), "%d", this->cnt);
    std::cout << "debug: " << n <<std::endl;
    n = src.write_(buffer, n);
    flock(src.get(), LOCK_UN);
    return n;
}



int FileLockingProblem::getCounter() {
    return this->cnt;
}