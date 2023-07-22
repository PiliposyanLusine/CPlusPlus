#include "Customer.h" 


Customer::Customer(const std::string& name, const std::string& contInfo, const std::string& paymentMethod)
{
    this->m_name = name;
    this->m_contInfo = contInfo;
    this->m_paymentMethod = paymentMethod;
}
std::string Customer::get_name() const
{
    return this->m_name;
}
std::string Customer::get_contIfno() const
{
    return this->m_contInfo;
}
std::string Customer::get_paymentMethod() const
{
    return this->m_paymentMethod;
}