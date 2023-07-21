#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
    private:
        std::string m_name;
        std::string m_contactInfo;
        std::string m_meterNumber;
        double m_consumtion;
    public:
        Customer() = default;
        Customer(const std::string& name, const std::string& contactInfo, const std::string& meterNumber, double consumtion);
        std::string get_name() const;
        std::string get_contactInfo() const;
        std::string get_meterNumber() const;
        double get_consumtion() const;              
};



#endif //CUSTOMER_H