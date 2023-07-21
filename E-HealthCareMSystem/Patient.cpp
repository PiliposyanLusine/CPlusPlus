#include "Patient.h"

Patient::Patient(const std::string& name, const std::string& birthDate, const std::string& gender, const std::string& contactInfo)
{
    this->m_name = name;
    this->m_birthDate = birthDate;
    this->m_gender = gender;
    this->m_contactInfo = contactInfo;
}
std::string Patient::get_name() const
{
    return this->m_name;
}
std::string Patient::get_birthDate() const
{
    return this->m_birthDate;
}
std::string Patient::get_gender() const
{
    return this->m_gender;
}
std::string Patient::get_contactInfo() const
{
    return this->m_contactInfo;
}
std::vector<std::string> Patient::get_medicalConditions() const
{
    return this->m_medicalConditions;
}
void Patient::addMedicalConditions(const std::string& condition)
{
    m_medicalConditions.push_back(condition);
}