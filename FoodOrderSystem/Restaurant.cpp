#include "Restaurant.h"

Restaurant::Restaurant(const std::string& name, const std::string& menu, const std::string& location)
{
    this->m_name = name;
    this->m_menu = menu;
    this->m_location = location;
}
std::string Restaurant::get_name() const
{
    return this->m_name;
}
std::string Restaurant::get_menu() const
{
    return this->m_menu;
}
std::string Restaurant::get_location() const
{
    return this->m_location;
}