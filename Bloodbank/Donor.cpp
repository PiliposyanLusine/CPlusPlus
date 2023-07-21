#include "Donor.h"


Donor::Donor(const std::string& name, const std::string& conInfo, const std::string& bloodtype)
{
    this->m_name = name;
    this->m_conInfo = conInfo;
    this->m_bloodType = bloodtype;
}
std::string Donor::get_name() const
{
    return this->m_name;
}
std::string Donor::get_conInfo() const
{
    return this->m_conInfo;
}
std::string Donor::get_bloodType() const
{
    return this->m_bloodType;
}