#include "Taxi.h"

Taxi::Taxi(const std::string& number, const std::string& nameDriver)
{
    this->m_number = number;
    this->m_nameDirver = nameDriver;
}
std::string Taxi::get_number() const
{
    return this->m_number;
}
std::string Taxi::get_nameDriver() const
{
    return this->m_nameDirver;
}

double Taxi::moneyTaxi(std::string str, double km)
{
    double money = 1.0;
    if(m_class.s1 == str)
    {
        money *= km;
    }

    else if(m_class.s2 == str)
    {
        money = km * 1.8;

    }
    else if(m_class.s3 == str)
    {
        money = km * 3.0;
    }
    return money;

}


void Taxi::status(std::string str)
{
    if(str == m_status.s2)
    {
        std::cout << "This driver " << m_nameDirver << "is a " << m_status.s2 << std::endl;
    }
    else
    {
        std::cout << "This driver " << m_nameDirver << "is a " << m_status.s1 << std::endl;

    }
}