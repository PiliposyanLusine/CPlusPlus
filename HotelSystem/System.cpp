#include "System.h"

void System::addRoom(Room room)
{
    m_rooms.push_back(&room);
}
void System::addCustomer(Customer customer)
{
    m_customer.push_back(&customer);
}

void System::file()
{
    for(int i = 0; i < m_rooms.size(); ++i)
    {
        std::string fileName = m_rooms[i]->getNumberStyle() + ".txt";
        std::ofstream file(fileName);
        if(file.is_open())
        {
            file << "Customer " << m_customer[i]->get_name() << " " << m_customer[i]->get_contInfo() << std::endl;
            file << m_rooms[i]->getNumberStyle() << std::endl; 
        }
    }
}