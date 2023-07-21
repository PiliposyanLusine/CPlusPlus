#include "Table.h"


Table::Table(const std::string& number, const std::string& capacity)
{
    this->m_number = number;
    this->m_capacity = capacity;
}

std::string Table::get_number() const
{
    return this->m_number;
}
std::string Table::get_capacity() const
{
    return this->m_capacity;
}


void Table::get_status(const std::string& str) const
{
    if(str == m_status.str1)
    {
        std::cout << m_status.str1 << "yes1 " << std::endl;
    }
    else
    {
        std::cout << m_status.str2 << "yes2 " << std::endl;

    }

}