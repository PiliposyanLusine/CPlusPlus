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
std::string User::get_contactInfo() const
{
    return this->m_contInfo;
}
