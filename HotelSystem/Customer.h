#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <iostream>

class Customer
{
    private:
        std::string m_name;
        std::string m_contInfo;
    public:
        Customer() = default;
        ~Customer() {}
        Customer(const std::string& name, const std::string& contInfo);

        std::string get_name() const;
        std::string get_contInfo() const;

        void print();
};





#endif //CUSTOMER_H