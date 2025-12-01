#ifndef DB_HPP
#define DB_HPP

class DB {
    public:
        virtual bool Connect() = 0;
        virtual bool Disconnect() = 0;
        virtual bool executeQuery(const char* query) = 0;
        virtual ~DB() {}
};

#endif