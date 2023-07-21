#include "Job.h"


Job::Job(const std::string& title, const std::string& description,const std::string& requirement, const std::string& company, double salary)
{
    this->m_title = title;
    this->m_salary = salary;
    this->m_requirement = requirement;
    this->m_description = description;
    this->m_company = company;
}

std::string Job::get_title() const
{
    return this->m_title;
}
std::string Job::get_description() const
{
    return this->m_description;
}
std::string Job::get_requirement() const
{
    return this->m_requirement;
}
std::string Job::get_company() const
{
    return this->m_company;
}
double Job::get_salary() const
{
    return this->m_salary;
}