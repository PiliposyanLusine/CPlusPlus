#include "Delivery.h"


Delivery::Delivery(const std::string& item, const std::string& origin, const std::string& destination, const std::string& time, const std::string& status, const User& user)
{
    this->m_item = item;
    this->m_origin = origin;
    this->m_destination = destination;
    this->m_time = time;
    this->m_status = status;
    this->m_user = user;
}


std::string Delivery::get_item() const
{
    return this->m_item;
}
std::string Delivery::get_origin() const
{
    return this->m_origin;
}
std::string Delivery::get_destination() const
{
    return this->m_destination;
}
std::string Delivery::get_time() const
{
    return this->m_time;
}
std::string Delivery::get_status() const
{
    return this->m_status;
}


void Delivery::file()
{
    std::string fileName = m_user.get_name() + ".txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {
        file << "Item: " << get_item() << std::endl;
        file << "Origin: " << get_origin() << std::endl;
        file << "Destination: " << get_destination() << std::endl;
        file << "Time: " << get_time() << std::endl;
        file << "Status: " << get_status() << std::endl;
        
        file.close();
        std::cout << "File created " << fileName << std::endl;
    }
    else
    {
        std::cout << "Error creating the bill file." << std::endl;
    }
}

