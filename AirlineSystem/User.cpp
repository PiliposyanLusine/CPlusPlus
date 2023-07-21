#include "User.h"

User::User(const std::string& name, const std::string& contInfo)
{
    this->m_name = name;
    this->m_contInfo = contInfo;
}
std::string User::get_name() const
{
    return this->m_name;
}
std::string User::get_contInfo() const
{
    return this->m_contInfo;
}

void User::printUser()
{
    std::cout << "User" << std::endl;
    std::cout << get_name() ;
    std::cout << get_contInfo() << std::endl;
}
