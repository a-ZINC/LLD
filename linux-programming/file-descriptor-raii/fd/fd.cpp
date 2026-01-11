#include"fd.hpp"

FileDescriptor::FileDescriptor(std::string path, int flags, int permissions) {
    this->fd = open(path.c_str(), flags, permissions);
    if (this->fd == -1) {
        throw std::system_error(errno, std::generic_category(), "Failed to open file: " + path);
    }
}

FileDescriptor::~FileDescriptor() {
    if (this->fd != -1) {
        std::cout<<"closing file bruh"<<std::endl;
        close(this->fd);
    }
}

int FileDescriptor::get() const {
    return this->fd;
}

FileDescriptor::FileDescriptor(FileDescriptor&& other) noexcept {
    this->fd = other.fd;
    other.fd = -1;
}

FileDescriptor& FileDescriptor::operator=(FileDescriptor&& other) noexcept {
    if (this != &other) {
        if (this->fd != -1) {
            close(this->fd);
        }
        this->fd = other.fd;
        other.fd = -1;
    }
    return *this;
}

ssize_t FileDescriptor::read_(void* buff, ssize_t size) {
    ssize_t result = read(this->fd, buff, size);
    if (result < 0) {
        throw std::system_error(errno, std::system_category(), "read failed");
    }
    return result;
}

ssize_t FileDescriptor::write_(void* buff, ssize_t size) {
    ssize_t result = write(this->fd, buff, size);
    if (result < 0) {
        throw std::system_error(errno, std::system_category(), "write failed");
    }
    return result;
}