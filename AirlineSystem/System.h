#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include "User.h"
#include "Flights.h"
#include <fstream>
#include <iostream>
#include <iostream>

class System
{
    private:
        std::vector<Flight*> m_flights;
        std::vector<User*> m_users;
    public:
        void bookSeats();
        void registerUser(User user);
        void registerFlight(Flight flight);
        void file();
};


#endif //SYSTEM_H