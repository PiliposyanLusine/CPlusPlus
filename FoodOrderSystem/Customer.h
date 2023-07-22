#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

class Customer
{
    private:
        std::string m_name;
        std::string m_contInfo;
        std::string m_paymentMethod;
    public:
        Customer() = default;
        Customer(const std::string& name, const std::string& contInfo, const std::string& paymentMethod);

        std::string get_name() const;
        std::string get_contIfno() const;
        std::string get_paymentMethod() const;

};


#endif //CUSTOMER_H