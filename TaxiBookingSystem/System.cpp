#include "System.h"

void System::registerTaxi(Taxi taxi)
{
    m_taxi.push_back(&taxi);
}

void System::registerUser(User user)
{
    m_user.push_back(&user);
}


void System::addToFile()
{
    std::string fileName = "TaxiSystem.txt";
    std::ofstream file(fileName);
    if(file.is_open())
    {
        for(int i = 0; i < m_taxi.size(); ++i)
        {
            file << "Driver " << m_taxi[i]->get_nameDriver() << " " << m_taxi[i]->get_number() << std::endl;
        }
        file << std::endl;
        for(int i = 0; i < m_user.size(); ++i)
        {
            file << "User : " << m_user[i]->get_name() << " " << m_user[i]->get_contInfo() << std::endl;
        }
        file << std::endl;
        file.close();
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

}