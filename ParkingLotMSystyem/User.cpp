#include "User.h"

User::User(const std::string& name, const SpaceSize info)
{
    this->m_info = info;
    this->m_name = name;
}
std::string User::get_name() const
{
    return this->m_name;
}
SpaceSize User::get_info() const
{
    return this->m_info;
}