#include "Customer.h"

Customer::Customer(const std::string& name, const std::string& contInfo)
{
    this->m_name = name;
    this->m_contInfo = contInfo;
}
std::string Customer::get_name() const
{
    return this->m_name;
}
std::string Customer::get_contInfo() const
{
    return this->m_contInfo;
}
void Customer::print()
{
    std::cout << "Customer->" << get_name() << " " << get_contInfo() << std::endl;
}