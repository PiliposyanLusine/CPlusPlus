#include "Room.h"

void Room::setNumberStyle(int myNumber) 
{
    switch (myNumber) {
    case 1:
        this->m_Number = "Single";
        this->m_available -= 1;
        std::cout << "This room  " << m_Number <<"is blooked " << std::endl;
        break;
    case 2:
        this->m_Number = "Double";
        this->m_available -= 1;  
        std::cout << "This room  " << m_Number <<"is blooked " << std::endl;
        break;
    case 3:
        this->m_Number = "Suit";
        this->m_available -= 1;
        std::cout << "This room  " << m_Number <<"is blooked " << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
        break;
    }
}

std::string Room::getNumberStyle() 
{
    return m_Number;
}