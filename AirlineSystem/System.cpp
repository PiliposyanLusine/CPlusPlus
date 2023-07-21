#include "System.h"

void System::bookSeats()
{
    for(int i = 0; i < m_flights.size(); ++i)
    {
        if(m_flights[i]->get_seats())
        {
            std::cout << "User vercrec " << std::endl;
        }
        else
        {
            std::cout << "Azat tex chka " << std::endl;
        }
    }
}
void System::file()
{
    std::ofstream file("Airline.txt");
    if(file.is_open())
    {
        for(int i = 0; i < m_flights.size(); ++i)
        {
            file << m_users[i]->get_name() << " " << m_users[i]->get_contInfo() << std::endl;
            file << m_flights[i]->get_number() << " " << m_flights[i]->get_origin() << m_flights[i]->get_destination() << " " << m_flights[i]->get_date() << " "<< m_flights[i]->get_time() << m_flights[i]->get_seats() << std::endl;
        }
        file.close();
        std::cout << "Yes, file is open " << std::endl;
    }
    else
    {
        std::cout << "No, file don't file open" << std::endl;
    }
}


void System::registerUser(User user)
{
    m_users.push_back(&user);
}
void System::registerFlight(Flight flight)
{
    m_flights.push_back(&flight);
}