#include "Flights.h"

Flight::Flight(const std::string& number, const std::string& origin, const std::string& destination, const std::string& date, const std::string& time)
{
    this->m_number = number;
    this->m_origin = origin;
    this->m_destination = destination;
    this->m_date = date;
    this->m_time = time;
    this->m_seats--;
    if(m_seats){std::cout << "Seats: " << m_seats << std::endl;}
    else{std::cout << "No seats" << std::endl;}
}
std::string Flight::get_number() const
{
    return this->m_number;
}
std::string Flight::get_origin() const
{
    return this->m_origin;
}
std::string Flight::get_destination() const
{
    return this->m_destination;
}
std::string Flight::get_date() const
{
    return this->m_date;
}
std::string Flight::get_time() const
{
    return this->m_time;
}
int Flight::get_seats() const
{
    return this->m_seats;
}

void Flight::printFlight()
{
    std::cout << "Flight " << std::endl;
    std::cout << get_number() << std::endl;
    std::cout << get_origin() << std::endl;
    std::cout << get_date()<< std::endl;
    std::cout << get_time() << std::endl;
    std::cout << get_destination() << std::endl;
    std::cout << get_seats() << std::endl;
}


