#include "ParkingLot.h"

ParkingLot::ParkingLot(User user, ParkingSpace space)
{
    this->m_spaces.push_back(ParkingSpace());
    this->m_users.push_back(User());
}




double ParkingLot::calculateFee(int number)
{
    ParkingSpace& space = m_spaces[number - 1];
    double rate = 0.0;
    switch (space.get_size()) 
    {
        case SpaceSize::Compact:
            rate = 5.0;
            break;
        case SpaceSize::Regular:
            rate = 7.0;
            break;
        case SpaceSize::Large:
            rate = 10.0;
            break;
    }
    return rate;
}

void ParkingLot::file()
{
    std::ofstream file("Parking.txt");
    if(file.is_open())
    {
        for(int i = 0; i < m_spaces.size(); ++i)
        {
            file << "User name: " << m_users[i].get_name() << std::endl;
            file << "Parking number: " << m_spaces[i].get_number() << std::endl;
            file << "Parking " << i << " available" << std::endl;
        }
        file << calculateFee(5) << std::endl;
        file.close();
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}




