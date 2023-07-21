#include "Doctor.h"



Doctor::Doctor(const std::string& name, const std::string& specialization,int yearsOfExperience, const std::string& contactInfo)
{
    this->m_name = name;
    this->m_contactInfo = contactInfo;
    this->m_specialization = specialization;
    this->m_yearsOfExperience = yearsOfExperience;
}


std::string Doctor::get_name() const
{
    return this->m_name;
}


std::string Doctor::get_specialization() const
{
    return this->m_specialization;
}


std::string Doctor::get_contactInfo() const
{
    return this->m_contactInfo;
}


int Doctor::get_yearsOfExperience() const
{
    return this->m_yearsOfExperience;
}