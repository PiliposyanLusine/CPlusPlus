#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <iostream>

struct Status
{
    std::string str1 = "Available";
    std::string str2 = "Booked";
};




class Table
{
    private:
        std::string m_number;
        std::string m_capacity;
        Status m_status;
    public:
        Table() = default;
        Table(const std::string& number, const std::string& capacity);

        std::string get_number() const;
        std::string get_capacity() const;

        void get_status(const std::string& str) const;
};






#endif //TABLE_H