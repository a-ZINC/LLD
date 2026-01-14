#ifndef FILE_DESCRIPTOR_HPP
#define FILE_DESCRIPTOR_HPP

#include <string>
#include <unistd.h>
#include <fcntl.h>
#include <system_error>
#include <iostream>

class FileDescriptor {
    private:
        int fd = -1;
    public:
        FileDescriptor(std::string path, int flags, int permissions = 0644);
        ~FileDescriptor();
        int get() const;
        FileDescriptor(const FileDescriptor&) = delete;
        FileDescriptor& operator=(const FileDescriptor&) = delete;

        FileDescriptor(FileDescriptor&& other) noexcept;
        FileDescriptor& operator=(FileDescriptor&& other) noexcept;

        ssize_t read_(void* buf, ssize_t size);
        ssize_t write_(const void* buf, ssize_t size);
};

#endif