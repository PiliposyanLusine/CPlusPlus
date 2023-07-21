#ifndef SYSTEM_H
#define SYSTEM_H
#include <fstream>
#include "Room.h"
#include "Customer.h"
#include <vector>

class System
{
    private:
        std::vector<Room*> m_rooms;
        std::vector<Customer*> m_customer;
    public:
        void addRoom(Room room);
        void addCustomer(Customer customer);
        void file();
};





#endif //SYSTEM_H