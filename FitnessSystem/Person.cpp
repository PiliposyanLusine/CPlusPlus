#include "Person.h"

Person::Person(const std::string& name, const std::string& continfo, const std::string& date, const std::string& level)
{
    this->m_name = name;
    this->m_level = level;
    this->m_date = date;
    this->m_contInfo = continfo;
}

std::string Person::get_name() const
{
    return this->m_name;
}
std::string Person::get_contInfo() const
{
    return this->m_contInfo;
}
std::string Person::get_date() const
{
    return this->m_date;
}
std::string Person::get_level() const
{
    return this->m_level;
}

