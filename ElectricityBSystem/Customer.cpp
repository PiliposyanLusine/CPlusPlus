#include "Customer.h"


Customer::Customer(const std::string& name, const std::string& contactInfo, const std::string& meterNumber, double consumtion)
{
    this->m_name = name;
    this->m_contactInfo = contactInfo;
    this->m_meterNumber = meterNumber;
    this->m_consumtion = consumtion;
}
std::string Customer::get_name() const
{
    return this->m_name;
}
std::string Customer::get_contactInfo() const
{
    return this->m_contactInfo;
}
std::string Customer::get_meterNumber() const
{
    return this->m_meterNumber;
}
double Customer::get_consumtion() const
{
    return this->m_consumtion;
}